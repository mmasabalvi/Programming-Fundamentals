
#include<iostream>
using namespace std;
int main()
{ 

int hwage;
float hours, tax, netpay;

cout<< "Enter hourly wage: " <<endl;      //Multiply hourly wage with hours worked. Then take withholding tax as percentage of total wage.
cin>> hwage;                              // Subtract that percentage from total wage

cout<< "Enter number of hours: " <<endl;
cin>> hours;

cout<< "Enter withholding tax: " << endl;
cin>> tax;

netpay= (hwage*hours)*((100-tax)/100);

cout<< "Net Pay: " << netpay <<endl;

return 0;
}


