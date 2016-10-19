# -*- coding: utf-8 -*-
"""
Created on Tue Aug 09 21:32:38 2016

@author: saqibhasan
"""


def load_maptest14bus(load_file_name, load_loss):
    
#    keyset1 = {'Load.load1': 21.7,'Load.load2': 7.6,'Load.load3': 11.2,'Load.load4': 6.1,'Load.load5': 13.8,'Load.load6': 3.5,'Load.load7': 14.9,'Load.load8': 9,'Load.load9': 16.6,'Load.load10': 47.8,'Load.load11': 94.2};
# -------------- Open and read the text file and convert the content into a dictionary ----------------
    file_data = open(load_file_name, 'r')
    data = file_data.readline();
    keyset1 = eval(data);
    file_data.close()
    load_loss1 = load_loss;
    Total_system_load = 0;
    load_loss_values = [];
    amount_load_loss= 0;
# ----------------- Calculating the total system load ------------------
    values = keyset1.values();
    for i in range(0 , len(values)):
        Total_system_load = Total_system_load + values[i];
# ----------------- Getting the values of the keys from dictionary ------------------
    load_loss_size = len(load_loss1);
    for i in range(0, load_loss_size):
        load_loss_values.append(keyset1[load_loss1[i]]);
# ----------------- Calculating the total load loss ------------------
    for i in range(0, len(load_loss_values)):
        amount_load_loss = amount_load_loss + load_loss_values[i];
#    print amount_load_loss
    return (Total_system_load, amount_load_loss);
    
#load_maptest14bus("G:\saqib\open DSS\OpenDSS_Python_Interface\Load_data.txt", load_loss);