def DSS_Python_Interface(filepath, contingency_range):
    import win32com.client
    import numpy as np
    DSSObj = win32com.client.Dispatch("OpenDSSEngine.DSS");
    DSSStart = DSSObj.Start("0");
    if DSSStart:
        print("OpenDSS Engine started successfully")
    else:
        print("Unable to start the OpenDSS Engine")
    DSSText = DSSObj.Text;
    DSSCircuit = DSSObj.ActiveCircuit;
    DSSSolution = DSSCircuit.Solution;
    DSSText.Command = "clear";
    DSSText.Command = "Compile " + filepath;
    ##DSSText.Command = "show volatge LN nodes";
    print("File compiled successfully")
    contingencies = maptest9bus_test_system(contingency_range);
    num_n_minus_k_contingencies = len(contingencies);
#    print line_to_be_removed[0][0]
    Total_line_loss_data = [];
    LC = [];
#    my_Bus=DSSCircuit.AllBusNames;
#    num_Bus=DSSCircuit.NumBuses;
#    elem_names= DSSCircuit.AllElementNames;
#    print("Number of buses: %s" %num_Bus)
    iLines = DSSCircuit.FirstPDElement();
    curr_Line_Name = [];
    Line_Names = [];
    normal_line_curr_values = [];
    maxcurline_limit1 = [];
    curr_Line_Current = [];
    Line_Currents = [];
    Total_line_loss_counter = 0;
    while(iLines > 0):
        line_curr_values = [];
        maxcurline_limit = [];
        curr_Line_Name = DSSCircuit.ActiveCktElement.Name;
        Line_Names.append(curr_Line_Name);
        ##print PD_Elem_Names
        curr_Line_Current = DSSCircuit.ActiveCktElement.CurrentsMagAng;
        LC = np.array(curr_Line_Current);
#        Line_Currents.append(np.array(curr_Line_Current));
        Line_Currents.append(curr_Line_Current);
        for i in range(0,3):
            line_curr_values.append((LC[6+(2*i)]));
            maxcurline_limit.append((LC[6+(2*i)]*10/7));
            #line_curr_values.append(np.array(LC[6+(2*i)]));
        normal_line_curr_values.append(tuple(line_curr_values));
        maxcurline_limit1.append(tuple(maxcurline_limit));
        iLines = DSSCircuit.NextPDElement();
        ##print iLines
    #print "LC: %s" %LC
    #print "Line_Currents: %s" %normal_line_curr_values
    #print "Maximum line current limit: %s" %maxcurline_limit1
        
    # removing a particular line from the circuit and solving 
    for i in range(0, num_n_minus_k_contingencies):
        
        contingency = contingencies[i];
        size_of_contingency = len(contingency);
        
        for j in range(0, size_of_contingency):
            initial_loss = [];
            stagecounter = 0;
            print "OUTAGE SELECTION NUMBER: %s" %(j+1)
            print "------------------------------------------------------------------------------------------------------"
            print "Calling Solver"
            Total_line_loss_counter = len(contingency[j]);
            
            for k in range(0, len(contingency[j])):
                DSSCircuit.CktElements(contingency[j][k]).Open(1,0);
                DSSCircuit.CktElements(contingency[j][k]).Open(2,0);
                initial_loss.append(contingency[j][k]);
            print "Initial outage: %s" %initial_loss
            
            DSSSolution.Solve();
            iLines = DSSCircuit.FirstPDElement();
            normal_line_curr_values = [];
            while(iLines > 0):
                line_curr_values = [];
                curr_Line_Name = DSSCircuit.ActiveCktElement.Name;
                Line_Names.append(curr_Line_Name);
                curr_Line_Current = DSSCircuit.ActiveCktElement.CurrentsMagAng;
                LC = np.array(curr_Line_Current);
                Line_Currents.append(np.array(curr_Line_Current));
                for k in range(0,3):
                    line_curr_values.append((LC[6+(2*k)]));
                    #line_curr_values.append(np.array(LC[6+(2*i)]));
                normal_line_curr_values.append(tuple(line_curr_values));
                iLines = DSSCircuit.NextPDElement();
            
            overloadExists=1;
            while(overloadExists == 1):
                overloadExists = 0;
                stagecounter = stagecounter + 1;
                line_loss = [];
                size = len(normal_line_curr_values);
                #print size
                for k in range(0,size):
                    if (normal_line_curr_values[k][2] >= maxcurline_limit1[k][2]):
                        DSSCircuit.CktElements(Line_Names[k]).Open(1,0);
                        DSSCircuit.CktElements(Line_Names[k]).Open(2,0);
                        line_loss.append(str(Line_Names[k]));
                        overloadExists = 1;
                        Total_line_loss_counter = Total_line_loss_counter + 1;
                line_loss_size = len(line_loss);
                if (line_loss_size != 0):
                    print "Stage {0}, Components Failed: {1} ".format(stagecounter, line_loss)
                DSSSolution.Solve();
                iLines = DSSCircuit.FirstPDElement();
                normal_line_curr_values = [];
                while(iLines > 0):
                    line_curr_values = [];
                    curr_Line_Name = DSSCircuit.ActiveCktElement.Name;
                    Line_Names.append(curr_Line_Name);
                    ##print PD_Elem_Names
                    curr_Line_Current = DSSCircuit.ActiveCktElement.CurrentsMagAng;
                    #print curr_Line_Current
                    LC = np.array(curr_Line_Current);
                    Line_Currents.append(np.array(curr_Line_Current));
                    for k in range(0,3):
                        line_curr_values.append((LC[6+(2*k)]));
                        #line_curr_values.append(np.array(LC[6+(2*i)]));
                    normal_line_curr_values.append(tuple(line_curr_values));
                    iLines = DSSCircuit.NextPDElement();
            print "Number of stages of failure = %s " %(stagecounter-1)
            print "Total number of components failed = %s " %Total_line_loss_counter
            DSSText.Command = "Compile " + filepath;
            
DSS_Python_Interface("'G:\saqib\open DSS\opendss_matlab_interface\ieee9bus_system.dss'", 2);