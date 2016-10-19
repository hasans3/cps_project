function [Total_system_load, load_loss_values, amount_load_loss] = load_maptest14bus1(load_loss)

% Creating a map for the system loads
keyset1 = {'Load.load1','Load.load2','Load.load3','Load.load4','Load.load5','Load.load6','Load.load7','Load.load8','Load.load9','Load.load10','Load.load11'};
valueset1 = {21.7,7.6,11.2,6.1,13.8,3.5,14.9,9,16.6,47.8,94.2};
mapObj1 = containers.Map(keyset1, valueset1);
% load_loss = {'Load.load1','Load.load2','Load.load3'};
% Calculating total system load
Total_system_load = 0;
load_loss_values = {};
load_loss_values1 = [];
amount_load_loss= 0;
[valueset1_r valueset1_c]= size(valueset1);
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
%mapObj1 = containers.Map(keyset1, valueset1);
%p= mapObj.keys(1)
%allk= keys(mapObj);

%allocating an intial subset size
% set_size= 10;
% [row col] = size(keyset1);
% if (set_size > col)
%     disp('not enough elements in the keyset');
%     return;
% end

%generating a random subset of elements
% random = datasample(keyset1,set_size);
% random1 = cell2mat(random);
%x = 20;
% y = {};
% [r c] = size(random1);
% %a = 'disconnectinglines';
% for i= 1:c
%     y{i,1} = values(mapObj1, {random1(i)});
% end
%tf = isnumeric(y)
%pt = cell2struct(y,a,1);
% [r c]= size(p.disconnectinglines);
% for i = 1:c
%     disp(p.disconnectinglines{1,i});
% end
