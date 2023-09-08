#include<iostream>
using namespace std;
int euclideanGCD(int, int);
int main()
{
int m;
int n;

cout << "Please Enter Two Positive Integers" << endl;
cin >> m >> n;

cout << "The Greatest Common Divisor is " << euclideanGCD(m, n) << endl;

}

int euclideanGCD(int m, int n)
{
int div;
if (m<0 || n<0)
{
cout << "Invalid Input" << endl;
}

else
{
     if (m>n)
     {
     while (n!=0)
     {
       div= n;           //112          84          28
       n= m%n;           // 84          28          0
       m= div;           // 112         84          28
     }
        
     }
     
    else if (n>m)
     {
     while (m!=0)
     {
       div= m;
       m= n%m;
       n= div;
     }
        
     }    
}
return div;
}   
 

 



  
   




