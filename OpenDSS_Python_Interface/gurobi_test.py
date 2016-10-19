# -*- coding: utf-8 -*-

import gurobipy
"""
Created on Wed Oct 05 16:05:11 2016

@author: saqibhasan
"""
def test_gurobi():

    m = gurobipy.read("C:\gurobi652\win64\examples\data\coins.lp");
    m.optimize();
    m.printAttr('X');
    
test_gurobi();
