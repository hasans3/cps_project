# -*- coding: utf-8 -*-
"""
Created on Mon Aug 08 16:01:56 2016

@author: saqibhasan
"""

def load_maptest9bus(load_loss):
#     Creating a map for the system loads
    keyset1 = {'Load.load1': 125,'Load.load2': 90,'Load.load3': 100};
#    Calculating total system load
#    load_loss = [];
    load_loss1 = load_loss;
    Total_system_load = 0;
    load_loss_values = [];
    amount_load_loss= 0;
    values = keyset1.values();
    for i in range(0 , len(values)):
        Total_system_load = Total_system_load + values[i];
    load_loss_size = len(load_loss1);
    for i in range(0, load_loss_size):
        load_loss_values.append(keyset1[load_loss1[i]]);
    for i in range(0, len(load_loss_values)):
        amount_load_loss = amount_load_loss + load_loss_values[i];
#    print amount_load_loss
    return (Total_system_load, amount_load_loss);
    #return amount_load_loss;
    

#load_maptest9bus(load_loss);