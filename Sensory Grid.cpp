#include<iostream>
using namespace std;
int main()
{

	// Hardcoded as Array index input cannot be taken from user in VS

	const int r = 4;

	int countx = 0;
	int county = 0;
	float per;
	
	cout << "Number of rows taken as: " <<  r << endl;
	
	const int c = 6;

	cout << "Number of columns taken as: " << c << endl;
	
	int arr[r][c];

	cout << "Enter Sensor Data (0's and 1's only): " << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		
		}

		cout << endl;
	}
	
	char arr1[r][c];

	cout << endl;

	cout << endl << "Sensor Grid: \n" << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (arr[i][j] == 1)
			{
				arr1[i][j] = 'X';
				countx++;
			}

			else
			{
				arr1[i][j] = '.';
				county++;
			}
		}
	}


	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr1[i][j] << " ";
		}

		cout << endl;
	}

	per = (countx / (static_cast<float>(countx) + county)) * 100;

	cout << "Percentage of sensors on: " << per << endl;
}