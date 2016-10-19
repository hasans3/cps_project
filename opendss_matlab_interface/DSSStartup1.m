function [DSSObj, DSSText] = DSSStartup1(bus)
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
i=1;
%DSSSolution.Solve;
volMag={};
curMag={};
curMag_normal={};
%setting Line current thresholds
iLines = DSSCircuit.FirstPDElement;
j=1;
while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2}
     for k=1:3
       [i1 i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag_normal{j,k}= i2
       maxcurline_limit{j,k}= curMag_normal{j,k}*(10/7);
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
end
disp('run successful');
if (bus==1)
   DSSText.Command = 'New fault.F1 bus1=loadbus1 phases=3'; 
   DSSCircuit.CktElements('line.L1').Open(1,0);
   DSSCircuit.CktElements('line.L1').Open(2,0);
   DSSCircuit.CktElements('line.L2').Open(1,0);
   DSSCircuit.CktElements('line.L2').Open(2,0);
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
       [i1 i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag{j,k}= i2;
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
   end
   [row col] = size(curMag);
   for i =1:row
       if (curMag{i,1} > maxcurline_limit{i,1})
           DSSCircuit.CktElements('current{i,1}').Open(1,0);
           DSSCircuit.CktElements('current{i,1}').Open(2,0);
       end
       DSSSolution.Solve;
   end
   my_Bus=DSSCircuit.AllBusNames;
   num_Bus=DSSCircuit.NumBuses;
   iLines = DSSCircuit.FirstPDElement;
   j=1;
   while(iLines > 0 )
     current{j,1}=DSSCircuit.ActiveCktElement.Name;
     current{j,2}=DSSCircuit.ActiveCktElement.Currents;
     x= current{j,2};
     for k=1:3
       [i1 i2]=cart2pol(x(6+2*k-1),x(6+2*k));
       curMag{j,k}= i2;
     end;
     iLines = DSSCircuit.NextPDElement;
     j=j+1;
   end
end


end
