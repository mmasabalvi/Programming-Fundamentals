#include<iostream>
using namespace std;
int digit (int, int);
int main()
{
int n;
int k;

cout << "Enter the value: " << endl;
cin >> n;                // 25419

cout << "Enter the digit position you want to split: " << endl;
cin >> k;

int reverse;
int rem;

while(n!= 0) 
{
rem= n%10;
reverse= reverse*10 + rem;
n= n/10;
}

n= reverse;            // 91452

cout << "Output: " << digit(n, k) << endl;

return 0;
}


int digit (int n, int k)
{

for (int i=0; i<k; i++)             // if k=2, answer is 4
{
n= n/10;
}

n= n%10;                           // Gives remainder 4

if (n!=0)
{
return n;
}

else
{
cout << "Index out of bound return" << endl;
return -1;
}
}



