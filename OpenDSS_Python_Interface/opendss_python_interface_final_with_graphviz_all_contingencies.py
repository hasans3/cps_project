# -*- coding: utf-8 -*-
"""
Created on Sun Aug 21 17:56:51 2016

@author: saqibhasan
"""

# -*- coding: utf-8 -*-
"""
Created on Thu Aug 18 11:48:36 2016

@author: saqibhasan
"""

# -*- coding: utf-8 -*-
"""
Created on Tue Aug 09 21:48:37 2016

@author: saqibhasan
"""

def DSS_Python_Interface1(filepath, comp_filename, load_file_name, contingency_range, blackout_criterion, system_name, dot_file_name):
    
# complete path of the dss file
# range of n-k contingency
# blackout_criterion in numbers
# name of topology for generated xml
    
# Setting up the com interface and the necessary files    
    import win32com.client
    import maptest14bus_test_system
    import load_maptest14bus
    import numpy as np
    from xml.dom import minidom
#    import time
# ----------------- Instantiate the OpenDSS Object -------------------------
#    total_execution_time_start = time.time()
    
    DSSObj = win32com.client.Dispatch("OpenDSSEngine.DSS");
    
# ----------------- Start the solver -----------------------------
    DSSStart = DSSObj.Start("0");
    if DSSStart:
        print("OpenDSS Engine started successfully")
    else:
        print("Unable to start the OpenDSS Engine")
        
# Set up the Text, Circuit, and Solution Interfaces
    DSSText = DSSObj.Text;
    DSSCircuit = DSSObj.ActiveCircuit;
    DSSSolution = DSSCircuit.Solution;
    
# Loading the circuit Using the Text Interface
    DSSText.Command = "clear";
    DSSText.Command = "Compile " + filepath;
    print("File compiled successfully")

# -------------------------------- Getting the contingency range -------------------------------
    contingencies = maptest14bus_test_system.maptest14bus_test_system(comp_filename, contingency_range);
    num_n_minus_k_contingencies = len(contingencies);

# ----------------------- Lists and variable initialization ------------------------
    LC = [];
    load_c = [];
    load_loss = [];
    iLines = DSSCircuit.FirstPDElement();
    curr_Line_Name = [];
    Line_Names = [];
    load_Names = [];
    normal_line_curr_values = [];
    maxcurline_limit1 = [];
    curr_Line_Current = [];
    Line_Currents = [];
    Total_line_loss_counter = 0;
    blackout_counter = 0;
    
# Getting current values of each line and setting up the maximum threshold
    while(iLines > 0):
        line_curr_values = [];
        maxcurline_limit = [];
        curr_Line_Name = DSSCircuit.ActiveCktElement.Name;
        Line_Names.append(curr_Line_Name);
        curr_Line_Current = DSSCircuit.ActiveCktElement.CurrentsMagAng;
        LC = np.array(curr_Line_Current);
        Line_Currents.append(curr_Line_Current);
        for i in range(0,3):
            line_curr_values.append((LC[6+(2*i)]));
            maxcurline_limit.append((LC[6+(2*i)]*10/7));
        normal_line_curr_values.append(tuple(line_curr_values));
        maxcurline_limit1.append(tuple(maxcurline_limit));
        iLines = DSSCircuit.NextPDElement();
    #print "Line_Currents: %s" %normal_line_curr_values
    #print "Maximum line current limit: %s" %maxcurline_limit1
# --------------code for xml generation---------------------------- 
    root = minidom.Document();
    root_element = root.createElement('Contingencies');
    root.appendChild(root_element);
    xml_str = root.toprettyxml(indent="\t");
    data_path = system_name;
    digraph_string = 'digraph G {\n'
# -----------------------------------------------------------------        
# Getting all the contingencies and loop through it
    for i in range(0, num_n_minus_k_contingencies):

# --------------code for xml generation----------------------------         
        mykcontingency = root.createElement('N-' + str(i+1) );
# -----------------------------------------------------------------         
        contingency = contingencies[i];
        size_of_contingency = len(contingency);
#        size_of_contingency = 20
# -------------- code for graphviz file generation -----------------------

#        digraph_string = digraph_string + '    ' + 'size ="17,30";\n'
# ------------------------------------------------------------------------
# ------------------ Disconnecting individual line(s) from the subset ------------------
        for j in range(0, size_of_contingency):
            initial_loss = [];
            stagecounter = 0;
            temp_stagecounter = 0
            print "OUTAGE SELECTION NUMBER: %s" %(j+1)
            print "------------------------------------------------------------------------------------------------------"
            print "Calling Solver"
            Total_line_loss_counter = len(contingency[j]);

#     --------------code for xml generation----------------------------------           
            my_path = root.createElement('Path');
            my_initial_outage = root.createElement('Initial_Stage');
            my_path.appendChild(my_initial_outage);
#     -----------------------------------------------------------------------
# ------------ Getting the initial outages and appending it to the list --------------            
            for k in range(0, len(contingency[j])):
                DSSCircuit.CktElements(contingency[j][k]).Open(1,0);
                DSSCircuit.CktElements(contingency[j][k]).Open(2,0);
                initial_loss.append(contingency[j][k]);
               

#     --------------code for xml generation----------------------------------                 
                my_outage = root.createElement('Outage');
                my_initial_outage.appendChild(my_outage);
                my_outage_text = root.createTextNode(str(contingency[j][k]));
                my_outage.appendChild(my_outage_text);
#     -----------------------------------------------------------------------
            print "Initial outage: {0}".format(initial_loss)
#     -------------------------------- code for graphviz file generation ---------------------------------------
            digraph_string = digraph_string + '    '
            digraph_string = digraph_string + '"' + str(initial_loss) + '"' + ' ' + '[shape = doublecircle];\n'
            digraph_string = digraph_string + '    '               
            digraph_string = digraph_string + '"' + str(initial_loss) + '"' + ' ' + '->' + ' '
#     ----------------------------------------------------------------------------------------------------------
# Solving the circuit and updating line current values after initial outages
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
                normal_line_curr_values.append(tuple(line_curr_values));
                iLines = DSSCircuit.NextPDElement();
            overloadExists=1;
#     --------------code for xml generation----------------------------------             
            my_cascading_outage = root.createElement('Cascading_Stage');
            final_stage_text = 'Safe';
#     -----------------------------------------------------------------------
#     -------------- Check for overloads and blackout criterion -------------
            while(overloadExists == 1):
                overloadExists = 0;
                stagecounter = stagecounter + 1;
                temp_stagecounter = stagecounter
                line_loss = [];
                load_loss = [];
                load_Names = [];
                digraph_string_temp = [];
                size = len(normal_line_curr_values);
                for k in range(0,size):
# ---------------------Removing overloaded lines-------------------------------------
                    if (normal_line_curr_values[k][1] >= maxcurline_limit1[k][1]):
                        DSSCircuit.CktElements(Line_Names[k]).Open(1,0);
                        DSSCircuit.CktElements(Line_Names[k]).Open(2,0);
                        line_loss.append(str(Line_Names[k]));
                        overloadExists = 1;
                        Total_line_loss_counter = Total_line_loss_counter + 1;
                        digraph_string_temp = line_loss
                line_loss_size = len(line_loss);
               # if (line_loss_size != 0):
                if line_loss:
                    print "Stage {0}, Components Failed: {1} ".format(stagecounter, line_loss)
#           ----------------------- code for graphviz file generation -----------------------
                    digraph_string = digraph_string + '"' + str(line_loss) + '"' + ';\n'
#                    digraph_string = digraph_string + '    ' + '"' + str(line_loss) + '"' + ' [shape = point];\n'
#     --------------code for xml generation-----------------------------------------                    
                    my_stage_num = root.createElement('Stage_Number');
                    my_stage_num_text = root.createTextNode(str(temp_stagecounter));
                    my_stage_num.appendChild(my_stage_num_text);
                    for k in range(0, line_loss_size):
                        my_outage = root.createElement('Outage');
                        my_outage_text = root.createTextNode(line_loss[k]);
                        my_outage.appendChild(my_outage_text);
                        my_stage_num.appendChild(my_outage);
                    my_cascading_outage.appendChild(my_stage_num);
#       ----------------------------------- code for graphviz file generation -------------------------------
                if digraph_string_temp:
                    digraph_string = digraph_string + '    '
                    digraph_string = digraph_string + '"' + str(digraph_string_temp) + '"' + ' ' + '->' + ' '   
#       -----------------------------------------------------------------------------------------------------
# Solving the circuit and updating line currents after removal of overloaded lines
# to check for further overload                    
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
                    normal_line_curr_values.append(tuple(line_curr_values));
                    iLines = DSSCircuit.NextPDElement();
#     ------------------------- Checking for load loss -----------------------                
                iLoads = DSSCircuit.FirstPCElement();
                load_curr_values = [];
                load_Names = [];
                load_loss = [];
                while(iLoads > 0):
                    load_i_values = [];
                    load_Name = DSSCircuit.ActiveCktElement.Name;
                    load_Names.append(load_Name);
                    load_current = DSSCircuit.ActiveCktElement.CurrentsMagAng;
                    load_c = np.array(load_current);
                    for k in range(0,3):
                        load_i_values.append((load_c[2*k]));
                    load_curr_values.append(tuple(load_i_values));
                    iLoads = DSSCircuit.NextPCElement();
                for k in range(0 , len(load_curr_values)):
                    if (load_curr_values[k][1] <= 1):
                        load_loss.append(load_Names[k]);
#    ---------------------------- Checking the blackout criterion ------------------------------------------------
                T_sys_load, amt_load_loss = load_maptest14bus.load_maptest14bus(load_file_name, load_loss); 
                if (((float(amt_load_loss)/float(T_sys_load))*100) >= blackout_criterion):
                    stagecounter = stagecounter + 1;
                    temp_stagecounter = stagecounter
                    print "More than {0} percent of the load has been lost".format(blackout_criterion)
                    print "System Blackout"
                    print "{0} MW load has been lost out of {1} MW total load".format(amt_load_loss, T_sys_load);
#    ------------------------------------- text added for xml code -----------------------------------------------                    
                    final_stage_text = 'Blackout';
                    blackout_counter = blackout_counter + 1;
                    break;
#    -------------- code for graphviz file generation ----------------
            digraph_string = digraph_string + final_stage_text + '\n'
#    -----------------------------------------------------------------
#            print load_Names
#    --------------code for xml generation-----------------------------------------
            my_path.appendChild(my_cascading_outage);
            my_final_stage = root.createElement('Final_Stage');
            my_final_stage_text = root.createTextNode(final_stage_text);
            my_final_stage.appendChild(my_final_stage_text);
            my_path.appendChild(my_final_stage);
#    ------------------------------------------------------------------------------            
#            print "Number of stages of failure = {0}".format(str(temp_stagecounter-1))
#            print "Total number of components failed = {0}".format(Total_line_loss_counter)
#    ----------------- Resetting the simulation back to normal -----------------------
            DSSText.Command = "Compile " + filepath;
#    ---------------------------- code for xml generation -------------------------------
            mykcontingency.appendChild(my_path);
        root_element.appendChild(mykcontingency);
        xml_str = root.toprettyxml(indent="\t");
# ---------------------------- code for graphviz file generation --------------------------------
    digraph_string = digraph_string + '"Blackout"' + ' [shape=circle,color=red,style=filled];\n'
    digraph_string = digraph_string + '"Safe"' + ' [shape=circle,color=green,style=filled];\n'
    digraph_string = digraph_string + '}'
#    print digraph_string
    with open(dot_file_name, "w") as f:
        f.write(digraph_string)
# ---------------------------- code for xml generation ---------------------------
    with open(data_path, "w") as f:
        f.write(xml_str);
    print "Total number of blackout scenarios: {0}".format(blackout_counter)
#    total_execution_time_end = time.time()
#    total_execution_time = (total_execution_time_end - total_execution_time_start)
#    print 'Total execution time in seconds: %s' %total_execution_time
# --------------------------------------------------------------------------------            
DSS_Python_Interface1("'G:\saqib\ieee14bus_system.dss'", "G:\saqib\open DSS\OpenDSS_Python_Interface\component_data.txt", "G:\saqib\open DSS\OpenDSS_Python_Interface\Load_data.txt", 5, 40, 'ieee14bus_system.xml', 'ieee14bus_digraph_point3.gv');