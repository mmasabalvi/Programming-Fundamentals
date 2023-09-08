/* Muhammad Masab Hammad
   22I-1004
   Assignment # 2 PF */
   
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float c;
int h, t;

cout << "Please enter Hardness of Steel: " << endl;
cin >>h;

cout << "Please enter Carbon content of Steel: " << endl;
cin>>c;

cout << "Please enter Tensile Strength of Steel: " << endl;
cin >> t;
 
if (h>50)                                                          //Using Nested if


{

if (c<0.7)

{ 
if (t>5600)
{cout << "Grade of Steel is 10" << endl;                                          
}
else 
{cout << "Grade of Steel is 9" << endl;}
}

else

{
if (t>5600)
{cout << "Grade of Steel is 7" << endl;}

else
{ cout << "Grade of Steel is 6" << endl;
}
}
}


else


{

if (c<0.7) 

{ if (t>5600)
{cout << "Grade of Steel is 8" << endl;
}
else
{cout << "Grade of Steel is 6" << endl;
}
}
else 

{ if (t<5600)
{cout << "Grade of Steel is 5" << endl;
}
else
{cout << "Grade os Steel is 6" << endl;
}
}
}


return 0;
}


