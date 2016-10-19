# -*- coding: utf-8 -*-
"""
Created on Mon Oct 10 12:05:08 2016

@author: saqibhasan
"""

def mitigation(filepath):
    
# complete path of the dss file
# range of n-k contingency
# blackout_criterion in numbers
# name of topology for generated xml
    
# Setting up the com interface and the necessary files    
    import win32com.client
#    import maptest14bus_test_system
#    import load_maptest14bus
    import numpy as np
#    from xml.dom import minidom
# ----------------- Instantiate the OpenDSS Object -------------------------
    
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
#    contingencies = maptest14bus_test_system.maptest14bus_test_system(comp_filename, contingency_range);
#    num_n_minus_k_contingencies = len(contingencies);

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
    binary_curr_values = [];
    
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
    size = len(normal_line_curr_values);
    for k in range(0,size):
        if (normal_line_curr_values[k][1] >= maxcurline_limit1[k][1]):
            binary_curr_values.append(1);
        else:
            binary_curr_values.append(0);
            
    file_data = open('G:\saqib\open DSS\OpenDSS_Python_Interface\ieee_9_bus_data\Load_data.txt', 'r');
    data = file_data.readline();
    keyset1 = eval(data);
    file_data.close()
mitigation("'G:\saqib\openDSS-Matlab Comparison\ieee_9_bus_matlab_comparison.dss'");