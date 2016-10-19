# -*- coding: utf-8 -*-
"""
Created on Fri Aug 05 15:20:49 2016

@author: saqibhasan
"""

def maptest9bus_test_system(contingency_range):
    #creating a map for the system
    import itertools
    cmb = [];
    valueset = ['Line.tl48', 'Line.tl49', 'Line.tl85', 'Line.tl96', 'Line.tl57', 'Line.tl67'];
#   Generating combinations 
#    contingency_range = 1;
    for i in range(0, contingency_range):
        #comb = [ list(x) for itertools.combinations(valueset, i+1));
        comb=[];
        for j in itertools.combinations(valueset, i+1):
            comb.append(list(j));
            #print comb
        cmb.append(comb);
    return cmb;
#    print cmb
#    print valueset;
#    return valueset;
#maptest9bus_test_system(2);