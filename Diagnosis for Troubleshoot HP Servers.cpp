
#include<iostream>
#include<string>
using namespace std;
int main()
{
string a; 


cout << "Start General diagnosis\nRecord symptom information.\nReboot server to see if condition still exists." << endl;

cout << "Is this a newly installed server?" << endl;
cin >> a;

if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
{ cout << "Reset any components that may have come loose during shipping and reboot the server" << endl;
cout << "Does condition still exist?" << endl;
cin >> a;
             
         if(a=="No"||a=="no"||a=="N"||a=="n")
         { cout << "Record action taken." << endl;
           cout << "End" << endl;
         }
         else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
         {cout << "Were options added or was the configuration changed recently?" << endl;
         cin >> a;
      
           if(a=="No"||a=="no"||a=="N"||a=="n")
           { cout << "Check for Service Notifications" << endl;
             cout << "Download the latest software and firmware from the HP Website." << endl;
             cout << "Does condition still exist?" << endl;
             cin >> a;
                           if (a=="No"||a=="no"||a=="N"||a=="n")
                           { cout << "Record action taken." << endl;
                             cout << "End" << endl;
                           }
                           else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                           {cout << "Isolate and minimise the memory configuration" << endl;
                            cout << "Does condition still exist?" << endl;
                            cin >> a;
                                 if (a=="No"||a=="no"||a=="N"||a=="n")
                                 {cout << "Record action taken." << endl;
                                  cout << "End" << endl;
                                 }
                                 else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                 {cout << "Break server down to minimal configuration" << endl;
                                  cout << "Does condition still exist?" << endl;
                                  cin >> a;
                                         if (a=="No"||a=="no"||a=="N"||a=="n")
                                         {cout << "Add one part at a time back to configuration to isolate faulty component" << endl;
                                         cout << "Does condition still exist?" << endl;
                                         cin >> a;
                                            if (a=="No"||a=="no"||a=="N"||a=="n")
                                            {cout << "Record action taken." << endl;
                                            cout << "End" << endl;
                                            }
                                            else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                            {cout << "Ensure the following information is available: "<< endl;
                                            cout << "--> Survey Configuration Snapshots" << endl;
                                            cout << "--> OS event log file" << endl;
                                            cout << "--> Full Carash Dump" << endl;
                                            cout << "Call HP Service Provider" << endl;
                                            } 
                                          }
                                         else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                         {cout << "Troubleshoot or repair basic server spare parts" << endl;
                                          cout << "Does condition still exist?" << endl;
                                          cin >> a;
                                             if (a=="No"||a=="no"||a=="N"||a=="n")
                                             {cout << "Record symptom & error information on repair tag if sending back a failed part" <<endl;
                                             cout << "End" << endl;
                                             }
                                              else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                             {cout << "Ensure the following information is available: "<< endl;
                                             cout << "--> Survey Configuration Snapshots" << endl;
                                             cout << "--> OS event log file" << endl;
                                             cout << "--> Full Carash Dump" << endl;
                                             cout << "Call HP Service Provider" << endl;
                                             }
                                          } 
                                   }
                            }
              }

            
            else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
            { cout << "Isolate what has changed. Verify it was installed correctly. Restore server to last known working state or original shipped configuration" << endl;
              cout << "Does condition still exist?" << endl;
              cin >> a;
                          if (a=="No"||a=="no"||a=="N"||a=="n")
                          { cout << "Record action taken." << endl;
                            cout << "End" << endl;
                          }
                          else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                          { cout << "Isolate and minimise memory configuration" << endl;
                            cout << "Does condition still exist?" << endl;
                            cin>>a;
                                if (a=="No"||a=="no"||a=="N"||a=="n")
                                { cout << "Record action taken." << endl;
                                 cout << "End" << endl;
                                }
                                else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                {cout << "Break server down to minimal configuration" << endl;
                                cout << "Does condition still exist?" << endl;
                                cin >> a;
                                      if (a=="No"||a=="no"||a=="N"||a=="n")
                                      {cout << "Add one part at a time back to configuration to isolate faulty component" << endl;
                                       cout << "Does condition still exist?" << endl;
                                       cin >> a;
                                          if (a=="No"||a=="no"||a=="N"||a=="n")
                                          {cout << "Record action taken." << endl;
                                            cout << "End" << endl;
                                          }
                                          else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                          {cout << "Ensure the following information is available: "<< endl;
                                          cout << "--> Survey Configuration Snapshots" << endl;
                                          cout << "--> OS event log file" << endl;
                                          cout << "--> Full Carash Dump" << endl;
                                          cout << "Call HP Service Provider" << endl;
                                          }
                                        }
                                      else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                      {cout << "Troubleshoot or repair basic server spare parts" << endl;
                                      cout << "Does condition still exist?" << endl;
                                      cin >> a;
                                           if (a=="No"||a=="no"||a=="N"||a=="n")
                                           {cout << "Record symptom & error information on repair tag if sending back a failed part" <<endl;
                                           cout << "End" << endl;
                                           }
                                           else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                           {cout << "Ensure the following information is available: "<< endl;
                                           cout << "--> Survey Configuration Snapshots" << endl;
                                           cout << "--> OS event log file" << endl;
                                           cout << "--> Full Carash Dump" << endl;
                                           cout << "Call HP Service Provider" << endl;   
                                           }
                                      }
                                 }
                            }
               }
            }
} 
      
else if (a=="No"||a=="no"||a=="N"||a=="n")
{cout << "Were options added or was the configuration changed recently?" << endl;
cin >> a;
      
           if(a=="No"||a=="no"||a=="N"||a=="n")
           { cout << "Check for Service Notifications" << endl;
             cout << "Download the latest software and firmware from the HP Website." << endl;
             cout << "Does condition still exist?" << endl;
             cin >> a;
                           if (a=="No"||a=="no"||a=="N"||a=="n")
                           { cout << "Record action taken." << endl;
                             cout << "End" << endl;
                           }
                           else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                           {cout << "Isolate and minimise the memory configuration" << endl;
                            cout << "Does condition still exist?" << endl;
                            cin >> a;
                                 if (a=="No"||a=="no"||a=="N"||a=="n")
                                 {cout << "Record action taken." << endl;
                                  cout << "End" << endl;
                                 }
                                 else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                 {cout << "Break server down to minimal configuration" << endl;
                                  cout << "Does condition still exist?" << endl;
                                  cin >> a;
                                         if (a=="No"||a=="no"||a=="N"||a=="n")
                                         {cout << "Add one part at a time back to configuration to isolate faulty component" << endl;
                                         cout << "Does condition still exist?" << endl;
                                         cin >> a;
                                            if (a=="No"||a=="no"||a=="N"||a=="n")
                                            {cout << "Record action taken." << endl;
                                            cout << "End" << endl;
                                            }
                                            else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                            {cout << "Ensure the following information is available: "<< endl;
                                            cout << "--> Survey Configuration Snapshots" << endl;
                                            cout << "--> OS event log file" << endl;
                                            cout << "--> Full Carash Dump" << endl;
                                            cout << "Call HP Service Provider" << endl;
                                            } 
                                          }
                                         else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                         {cout << "Troubleshoot or repair basic server spare parts" << endl;
                                          cout << "Does condition still exist?" << endl;
                                          cin >> a;
                                             if (a=="No"||a=="no"||a=="N"||a=="n")
                                             {cout << "Record symptom & error information on repair tag if sending back a failed part" <<endl;
                                             cout << "End" << endl;
                                             }
                                              else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                             {cout << "Ensure the following information is available: "<< endl;
                                             cout << "--> Survey Configuration Snapshots" << endl;
                                             cout << "--> OS event log file" << endl;
                                             cout << "--> Full Carash Dump" << endl;
                                             cout << "Call HP Service Provider" << endl;
                                             }
                                          } 
                                   }
                            }
              }

            
            else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
            { cout << "Isolate what has changed. Verify it was installed correctly. Restore server to last known working state or original shipped configuration" << endl;
              cout << "Does condition still exist?" << endl;
              cin >> a;
                          if (a=="No"||a=="no"||a=="N"||a=="n")
                          { cout << "Record action taken." << endl;
                            cout << "End" << endl;
                          }
                          else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                          { cout << "Isolate and minimise memory configuration" << endl;
                            cout << "Does condition still exist?" << endl;
                            cin>>a;
                                if (a=="No"||a=="no"||a=="N"||a=="n")
                                { cout << "Record action taken." << endl;
                                 cout << "End" << endl;
                                }
                                else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                {cout << "Break server down to minimal configuration" << endl;
                                cout << "Does condition still exist?" << endl;
                                cin >> a;
                                      if (a=="No"||a=="no"||a=="N"||a=="n")
                                      {cout << "Add one part at a time back to configuration to isolate faulty component" << endl;
                                       cout << "Does condition still exist?" << endl;
                                       cin >> a;
                                          if (a=="No"||a=="no"||a=="N"||a=="n")
                                          {cout << "Record action taken." << endl;
                                            cout << "End" << endl;
                                          }
                                          else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                          {cout << "Ensure the following information is available: "<< endl;
                                          cout << "--> Survey Configuration Snapshots" << endl;
                                          cout << "--> OS event log file" << endl;
                                          cout << "--> Full Carash Dump" << endl;
                                          cout << "Call HP Service Provider" << endl;
                                          }
                                        }
                                      else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                      {cout << "Troubleshoot or repair basic server spare parts" << endl;
                                      cout << "Does condition still exist?" << endl;
                                      cin >> a;
                                           if (a=="No"||a=="no"||a=="N"||a=="n")
                                           {cout << "Record symptom & error information on repair tag if sending back a failed part" <<endl;
                                           cout << "End" << endl;
                                           }
                                           else if (a=="Yes"||a=="yes"||a=="y"||a=="Y")
                                           {cout << "Ensure the following information is available: "<< endl;
                                           cout << "--> Survey Configuration Snapshots" << endl;
                                           cout << "--> OS event log file" << endl;
                                           cout << "--> Full Carash Dump" << endl;
                                           cout << "Call HP Service Provider" << endl;   
                                           }
                                      }
                                 }
                            }
               }
} 
              
return 0;
}





















