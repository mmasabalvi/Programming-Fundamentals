#include<iostream>
using namespace std;
int main()
{
	int n = 5;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	cout << endl;

	cout << "First Pattern:" << endl<< endl;

	int i = 1;

	while (i <= n)
	{
		int j = 1;

		while (j <= i)
		{
			cout << "*";
			j++;
		}

		int k = (n - 1);

		while (k >= i)
		{
			cout << " ";
			k--;
		}

		k = (n - 1);

		while (k >= i)
		{
			cout << " ";
			k--;
		}

		j = 1;

		while (j <= i)
		{
			cout << "*";
			j++;
		}

		cout << endl;
		i++;
	}

	i = 1;

	while (i < n)
	{
		int j = (n - 1);

		while (j >= i)
		{
			cout << "*";
			j--;
		}

		int k = 1;

		while (k <= i)
		{
			cout << " ";
			k++;
		}

		k = 1;

		while (k <= i)
		{
			cout << " ";
			k++;
		}

		j = (n - 1);

		while (j >= i)
		{
			cout << "*";
			j--;
		}

		cout << endl;
		i++;
	}


	
	cout << endl << endl;

	cout << "Second Pattern:" << endl<< endl;

	cout << "*";


	int a = 1;
	while (a <= (2 * (n - 2) + 1))
	{
		cout << " ";
		a++;
	}

	a = 1;
	while (a <= n)
	{
		cout << "* ";
		a++;
	}

	cout << endl;

	a = 1;
	while (a <= (n - 2))
	{
		cout << "*";
	
		int b = 1;
		while (b <= (2 * (n - 2) + 1))
		{
			cout << " ";
			b++;
		}
	
		cout << "*";
		cout << endl;

		a++;
	}


	a = 1;
	while (a <= (n + (n - 1)))
	{
		cout << "* ";
		a++;
	}

	cout << endl;

	a = 1;
	while (a <= (n - 2))
	{
		cout << " ";

		int b = 1;
		while (b <= (2 * (n - 2) + 1))
		{
			cout << " ";
			b++;
		}

		cout << "*";

		b = 1;
		while (b <= (2 * (n - 2) + 1))
		{
			cout << " ";
			b++;
		}

		cout << "*";

		cout << endl;
		a++;
	}

	a = 1;
	while (a <= n)
	{
		cout << "* ";
		a++;
	}

	a = 1;
	while (a <= (2 * (n - 2)))
	{
		cout << " ";
		a++;
	}

	cout << "*" << endl;


}
