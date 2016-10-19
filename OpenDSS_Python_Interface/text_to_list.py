# -*- coding: utf-8 -*-
"""
Created on Tue Aug 16 14:22:46 2016

@author: saqibhasan
"""
def read_txt(filename):
    valueset = [];
    data_file = open(filename, 'r'); 
    for line in data_file.readlines(): 
        tmp = []
        for element in line[0:-1].split(' '):
            tmp.append(element);
    valueset.append(tmp);
    print valueset
read_txt('component_data.txt');