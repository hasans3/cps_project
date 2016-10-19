# -*- coding: utf-8 -*-
"""
Created on Tue Aug 16 16:35:22 2016

@author: saqibhasan
"""

def testing_load_data_read(file_name):
    result = {}
    for line in file_name:
        key, name, year_of_birth = [x.strip() for x in line.split(",")]
        result[key] = (name, year_of_birth)
#    return result
testing_load_data_read('Load_data.txt');