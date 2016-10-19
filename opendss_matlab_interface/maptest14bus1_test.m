function [Comb] = maptest14bus1_test(contingency_range)

%creating a map for the system
valueset = {'Line.tl12', 'Line.tl23', 'Line.tl1011', 'Line.tl1213', 'Line.tl25', 'Line.tl34', 'Line.tl24', 'Line.tl47', 'Line.tl15', 'Line.tl914', 'Line.tl49', 'Line.tl612', 'Line.tl1314', 'Line.tl910', 'Line.tl611', 'Line.tl79', 'Line.tl78', 'Line.tl45', 'Line.tl56', 'Line.tl613'};
% Generating combinations 
%contingency_range = 2;
for i= 1:contingency_range
    Comb{i} = combnk(valueset,i);
end
%size(Comb);