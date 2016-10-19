function [Comb] = maptest9bus1_test(contingency_range)

%creating a map for the system
valueset = {'Line.tl48', 'Line.tl49', 'Line.tl85', 'Line.tl96', 'Line.tl57', 'Line.tl67'};
% Generating combinations 
%contingency_range = 3;
for i= 1:contingency_range
    Comb{i} = combnk(valueset,i);
end
%size(Comb);