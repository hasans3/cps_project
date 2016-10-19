function [DSSObj, DSSText] = DSSStartup()
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
DSSSolution.Solve;
volMag={};
curMag={};

while(i<=num_Bus)
    DSSvolt = DSSCircuit.Buses(my_Bus{i});
    voltage{i,1}= my_Bus{i};
    voltage{i,2}=(DSSvolt.Voltages);
    x=DSSvolt.Voltages;
     for k=1:3
       [v1 v2]=cart2pol(x(2*k-1),x(2*k));
        volMag{i,k}= v2;
     end;
i = i+1;
end
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
disp('run successful');
DSSText.Command = 'New fault.F1 bus1=loadbus1 phases=3';
my_Bus=DSSCircuit.AllBusNames;
num_Bus=DSSCircuit.NumBuses;
i=1;
DSSSolution.Solve;
while(i<=num_Bus)
    DSSvolt = DSSCircuit.Buses(my_Bus{i});
    voltage{i,1}= my_Bus{i};
    voltage{i,2}=(DSSvolt.Voltages);
    x=DSSvolt.Voltages;
     for k=1:3
       [v1 v2]=cart2pol(x(2*k-1),x(2*k));
        volMag{i,k}= v2;
     end;
i = i+1;
end
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

