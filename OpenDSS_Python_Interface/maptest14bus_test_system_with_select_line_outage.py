# -*- coding: utf-8 -*-
"""
Created on Tue Aug 09 21:41:07 2016

@author: saqibhasan
"""

def maptest14bus_test_system(comp_filename, contingency_range):
    
# To generate all possible combinations itertools is needed
    import itertools
    cmb = [];
#    valueset = ['Line.tl12', 'Line.tl23', 'Line.tl1011', 'Line.tl1213', 'Line.tl25', 'Line.tl34', 'Line.tl24', 'Line.tl47', 'Line.tl15', 'Line.tl914', 'Line.tl49', 'Line.tl612', 'Line.tl1314', 'Line.tl910', 'Line.tl611', 'Line.tl79', 'Line.tl78', 'Line.tl45', 'Line.tl56', 'Line.tl613'];
#    contingency_range = 1;
    valueset =[];
# -------------- Open and read the text file and convert the content into a list ----------------    
    data_file = open(comp_filename, 'r'); 
    line_data = data_file.readline();
    valueset = eval(line_data);
    data_file.close()
#    print valueset
# ------------- Generate all the possible combinations from the list ------------- 
    for i in range(0, contingency_range):
        comb=[];
        for j in itertools.combinations(valueset, i+1):
            comb.append(list(j));
            #print comb
        cmb.append(comb);
#    print cmb[0][0]
    return cmb;
#maptest14bus_test_system("G:\saqib\open DSS\OpenDSS_Python_Interface\component_data.txt", 2);