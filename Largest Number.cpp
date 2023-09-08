
   
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

int num1, num2, num3, num4, result, val;

cout << "Please enter the number of Values (3/4)?" << endl;
cin>> val;

switch(val)                                                                  // switch used for determining 3 or 4 values
{ 
case 3:
cout << "Please enter the three numbers" << endl;
cin >> num1 >> num2 >> num3;

result=(num1>num2) ? (num1>num3? num1:num3):(num2>num3? num2:num3);          // ternary operator used for finding highest number

cout << "Largest Number: " << result << endl;
break;

case 4:
cout << "Please enter the four numbers" << endl;
cin >> num1 >> num2 >> num3 >> num4;

result=(num1>num2) ? (num1>num3? (num1>num4? num1:num4):(num3>num4? num3:num4))  :  (num2>num3? (num2>num4? num2:num4):(num3>num4? num3:num4));

cout << "Largest Number: " << result << endl;
break;

default: cout << "Invalid Input" << endl;
}
return 0;
}
