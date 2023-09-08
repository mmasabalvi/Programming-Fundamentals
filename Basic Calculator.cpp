#include<iostream>
using namespace std;
int addition (int, int);
int subtraction (int, int);
int multiplication (int, int);
int absolute (int);
int main()
{
int n1;
int n2;
char ops;

cout << "Please enter two input values: " << endl;
cin >> n1 >> n2;

cout << "Please enter an operator from the following choices" << endl;

cout << "(+) for Addition\n(-) for Subtraction\n(*) for Multiplication\n(~) for Absolute" << endl;
cin >> ops;

switch (ops)
{
case '+': cout << "Answer: " << addition (n1, n2) << endl;
break;
case '-': cout << "Answer: " << subtraction (n1, n2) << endl;
break;
case '*': cout << "Answer: " << multiplication (n1,n2) << endl;
break;
case '~': cout << "Answer: Absolute of first input value: " << absolute (n1) << endl;
break;

default: cout << "Invalid Input" << endl;
}

return 0;
}


int addition (int n1, int n2)
{
int count= 0;

for (int a= 0; a!=n1; a++)
{
count++;
}

for (int b= 0; b!=n2; b++)
{
count++;
}

return count;
}


int subtraction (int n1, int n2)
{
for (int a= 1; a<= n2; a++)
{
n1--;
}

return n1;
}


int multiplication (int n1, int n2)
{
int count= 0;

for (int a= 0; a< n1; a++)
{
     for (int b= 0; b< n2; b++)
     {
     count++;
     }
}

return count;
}


int absolute (int n1)
{
int count= 0;

if (n1>0)
{
return n1;
}

else
{
for (int a= n1; a< 0; a++)
{
count++;
}
}

return count;
}
 
















