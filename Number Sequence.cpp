

#include<iostream>
using namespace std;
int main()
{

int x;
cout << "Please input a value:" << endl;
cin >> x;

cout << "Starting with the number " << x << ":" << endl;

int even_res;
int odd_res;
int count= 0;

while (x!=1)
{
if (x%2==0)
{ 
even_res= x/2;
cout << x << " is even, so I take half: " << even_res << endl;
x = even_res;
count++;
}
else
{
odd_res= 3*x +1;
cout << x << " is odd , so I make 3n + 1: " << odd_res << endl;
x= odd_res;
count++;
}
}

cout << "k = " << count << endl;

return 0;
}
 
