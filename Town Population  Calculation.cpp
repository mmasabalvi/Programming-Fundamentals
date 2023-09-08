/* Time after Population of Town A = Population of Town B, starting with Town A having less population*/

#include<iostream>
using namespace std;
int main()
{
double A, B;
double Arate, Brate;
int years;

cout << "Enter Population of Town A" << endl;
cin >> A;

cout << "Enter Growth Rate of Town A" << endl;
cin >> Arate;

cout << "Enter Population of Town B" << endl;
cin >> B;

cout << "Enter Growth Rate of Town B" << endl;
cin >> Brate;

int count= 0;

while (A<B)
{
A= A+(A*(Arate/100));
B= B+(B*(Brate/100));

years= count++;
} 

cout << "Years = " << years << endl;
cout << "Population of Town A = " << A << endl;
cout << "Population of Town B = " << B << endl;

return 0;
}

