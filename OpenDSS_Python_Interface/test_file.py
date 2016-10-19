def DSS_sim(self):
  import win32com.client
  self.DSSObj = win32com.client.Dispatch("OpenDSSEngine.DSS");
  DSSStart = DSSObj.Start("0");
  print ("OpenDSS Engine started successfully")
  if DSSStart:
      print ("OpenDSS Engine started successfully");
  else:
      print ("Unable to start the OpenDSS Engine");
  DSSText = DSSObj.Text;
  DSSCircuit = DSSObj.ActiveCircuit;
  DSSSolution = DSSCircuit.Solution;
  DSSText.Command = "clear";
  DSSText.Command = "Compile 'G:\saqib\open DSS\14bussystemwithtransformerasline.dss'";
  j = 1;
  curMag = [];
  curMag_normal = [];
  load_cur_mag = [];
  Total_line_loss_data = [];
  v = [];
  ilines = DSSCircuit.FirstPDElement;
  j = 1;
  while(iLines > 0 ):
      current[j,1]=DSSCircuit.ActiveCktElement.Name;
      current[j,2]=DSSCircuit.ActiveCktElement.Currents;
      x= current[j,2];
      for k in range (1, 3):
          [i1, i2]=cart2pol(x(6+2*k-1),x(6+2*k));
          curMag_normal[j,k]= i2;
          maxcurline_limit[j,k]= curMag_normal[j,k]*(10/7);
      iLines = DSSCircuit.NextPDElement;
      j=j+1;
      print ("value of j %s" %j)
   
