#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "In C(n,k), enter the value of n (rows): " << endl;
    cin >> n;

    int k;
    cout << "Enter the value of k: " << endl;
    cin >> k;

    cout << "Pascal's Triangle:" << endl << endl;


    for (int i = 0; i < (n+1); i++)
    {
        int x = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << x << " ";
            x = x * (i - j) / (j + 1);
        }

        cout << endl;
    }
    
    cout << endl;
    cout << "The Binomial Coefficient is: ";

    int c = 1;

    for (int i = 0; i < k; i++)
    {
        c *= (n - i);
        c /= (i + 1);
        
    }

    cout << c;

}