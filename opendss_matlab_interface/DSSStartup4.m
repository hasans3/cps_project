function [DSSObj, DSSText, Total_line_loss] = DSSStartup4()
%mydir = 'G:\saqib\open DSS\RBTS_system.dss';
%cd(mydir);
DSSObj = actxserver('OpenDSSEngine.DSS');
DSSStart = DSSObj.Start(0);
DSSText = DSSObj.Text;
if ~DSSStart
    disp('Unable to start the OpenDSS Engine')
return
end
DSSCircuit = DSSObj.ActiveCircuit;
DSSSolution = DSSCircuit.Solution;
DSSText.Command = 'clear';
DSSText.Command = 'Compile "G:\saqib\open DSS\testcircuit.dss"';
my_Bus=DSSCircuit.AllBusNames;
num_Bus=DSSCircuit.NumBuses;
j=1;
%DSSSolution.Solve;
volMag={};
curMag={};
curMag_normal={};
line_loss={};
line_loss1={};
Total_line_loss=[];
%setting Line current thresholds
iLines = DSSCircuit.FirstPDElement;
j=1;
max = {};
[struct, key, value] = map();
[r c]= size(struct.disconnectinglines);
while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag_normal{j,k}= i2;
       maxcurline_limit{j,k}= curMag_normal{j,k}*(10/7);
       %max  = maxcurline_limit{j,k}
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
end
%disp('run successful');
if (key)
   %DSSText.Command = 'New fault.F1 bus1=loadbus1 phases=3'; 
   for i=1:c
       DSSCircuit.CktElements(struct.disconnectinglines{1,i}).Open(1,0);
       DSSCircuit.CktElements(struct.disconnectinglines{1,i}).Open(2,0);
       line_loss{i,1} = struct.disconnectinglines{1,i};
   end
   %line_loss11 = cell2mat(line_loss);
%    DSSCircuit.CktElements('line.L1').Open(1,0);
%    DSSCircuit.CktElements('line.L1').Open(2,0);
%    DSSCircuit.CktElements('line.L2').Open(1,0);
%    DSSCircuit.CktElements('line.L2').Open(2,0);
   DSSSolution.Solve;
   my_Bus=DSSCircuit.AllBusNames;
   num_Bus=DSSCircuit.NumBuses;
   iLines = DSSCircuit.FirstPDElement;
   j=1;
   while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag{j,k}= i2;
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
   end
   [row, col] = size(curMag);
   %DSSSolution.Solve;
   for i =1:row
       if (curMag{i,1} >= maxcurline_limit{i,1})
           DSSCircuit.CktElements(current{i,1}).Open(1,0);
           DSSCircuit.CktElements(current{i,1}).Open(2,0);
           line_loss1{i,1} = current{i,1};
       end
       DSSSolution.Solve;
   end
   %line_loss12 = cell2mat(line_loss1);
   TL = [line_loss; line_loss1];
   my_Bus=DSSCircuit.AllBusNames;
   num_Bus=DSSCircuit.NumBuses;
   iLines = DSSCircuit.FirstPDElement;
   j=1;
   while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag{j,k}= i2;
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
   end
end
Total_line_loss= TL



% if (bus==2)
%    DSSText.Command = 'New fault.F1 bus1=loadbus3 phases=3'; 
%    DSSCircuit.CktElements('line.L3').Open(1,0);
%    DSSCircuit.CktElements('line.L3').Open(2,0);
%    DSSCircuit.CktElements('line.L4').Open(1,0);
%    DSSCircuit.CktElements('line.L4').Open(2,0);
%    line_lost = {'linel3';'linel4'}
%    DSSSolution.Solve;
%    my_Bus=DSSCircuit.AllBusNames;
%    num_Bus=DSSCircuit.NumBuses;
%    iLines = DSSCircuit.FirstPDElement;
%    j=1;
%    while(iLines > 0 )
%      current{j,1}=DSSCircuit.ActiveCktElement.Name;
%      current{j,2}=DSSCircuit.ActiveCktElement.Currents;
%      x= current{j,2};
%      for k=1:3
%        [i1 i2]=cart2pol(x(6+2*k-1),x(6+2*k));
%        curMag{j,k}= i2;
%      end;
%      iLines = DSSCircuit.NextPDElement;
%      j=j+1;
%    end
%    [row col] = size(curMag);
%   
%    for i =1:row
%        if (curMag{i,1} > maxcurline_limit{i,1})
%            DSSCircuit.CktElements(current{i,1}).Open(1,0);
%            DSSCircuit.CktElements(current{i,1}).Open(2,0);
%        end
%        DSSSolution.Solve;
%    end
%    my_Bus=DSSCircuit.AllBusNames;
%    num_Bus=DSSCircuit.NumBuses;
%    iLines = DSSCircuit.FirstPDElement;
%    j=1;
%    while(iLines > 0 )
%      current{j,1}=DSSCircuit.ActiveCktElement.Name;
%      current{j,2}=DSSCircuit.ActiveCktElement.Currents;
%      x= current{j,2};
%      for k=1:3
%        [i1 i2]=cart2pol(x(6+2*k-1),x(6+2*k));
%        curMag{j,k}= i2
%      end;
%      iLines = DSSCircuit.NextPDElement;
%      j=j+1;
%    end
% end
end

