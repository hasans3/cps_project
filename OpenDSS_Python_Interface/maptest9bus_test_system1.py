# -*- coding: utf-8 -*-
"""
Created on Mon Aug 08 10:40:47 2016

@author: saqibhasan
"""

def maptest9bus_test_system1(contingency_range):
    #creating a map for the system
    import itertools
    import numpy as np
    cmb = [];
    valueset = [['Line.tl48', 'Line.tl49'], ['Line.tl85', 'Line.tl96'], ['Line.tl57', 'Line.tl67']];
#   Generating combinations 
#    contingency_range = 1;
    for i in range(0, contingency_range):
        comb = [];
        for j in itertools.combinations(valueset, i+1):
            comb.append(j);
            #print comb
        cmb.append(comb);
#    for i in range(0, len(cmb)):
#        cmb[i] = map(' '.join, cmb[i]);
#    return cmb;
#    print cmb
#    print valueset;
    return valueset;
#maptest9bus_test_system1(1);