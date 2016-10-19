function [Total_system_load, load_loss_values, amount_load_loss] = load_maptest9bus1(load_loss)

% Creating a map for the system loads
keyset1 = {'Load.load1','Load.load2','Load.load3'};
valueset1 = {125,90,100};
mapObj1 = containers.Map(keyset1, valueset1);
% load_loss = {'Load.load1','Load.load2','Load.load3'};
% Calculating total system load
Total_system_load = 0;
load_loss_values = {};
load_loss_values1 = [];
amount_load_loss= 0;
[valueset1_r, valueset1_c]= size(valueset1);
for i = 1:valueset1_c
    Total_system_load = Total_system_load + valueset1{1,i};
end
% Obtaining size of load_loss
[r_load_loss, c_load_loss] = size(load_loss);
% obtaining values from the respective keys and converting them into a
% normal array from a cell
for i= 1:c_load_loss
     load_loss_values{i,1} = values(mapObj1, {load_loss{1,i}});
     load_loss_values1(i) = cell2mat(load_loss_values{i,1});
end
% Obtaining size of load_loss_values1
[r_load_loss_values1, c_load_loss_values1] = size(load_loss_values1);
% Calculating the total amount of load lost
for i=1:c_load_loss_values1
    amount_load_loss = amount_load_loss + load_loss_values1(i);
end
