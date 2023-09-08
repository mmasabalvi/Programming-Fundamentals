
   
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int day, month;

cout << "Please enter the date: " << endl;
cin >> day;
cout << "Please enter the month number: " << endl;
cin >> month;

if 
((month==12 && (day>=16 || day<=31)) || (month==1 && (day>=1 || day<=31)) || (month==2 && (day>=1 || day<=31)) || (month==3 && (day>=1 || day<=15)))
{cout << "Winter"<< endl;
}
else if 
((month==3 && (day>=16 || day<=31)) || (month==4 && (day>=1 || day<=31)) || (month==5 && (day>=1 || day<=31)) || (month==6 && (day>=1 || day<=15)))
{cout << "Spring" << endl;
}
else if 
((month==6 && (day>=16 || day<=31)) || (month==7 && (day>=1 || day<=31)) || (month==8 && (day>=1 || day<=31)) || (month==9 && (day>=1 || day<=15)))
{cout << "Summer" << endl;
}
else if 
((month==9 && (day>=16 || day<=31)) || (month==10 && (day>=1 || day<=31)) || (month==11 && (day>=1 || day<=31)) || (month==12 && (day>=1 || day<=15)))
{cout << "Fall" << endl;
}
return 0;
}



