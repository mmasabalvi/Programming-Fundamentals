#include<iostream>
//#include <windows.h>
#include<iomanip>
#include<string>
using namespace std;

void readData(int data[][2], int busnum);
void totalFuelConsumption(int data[][2], int busnum);
void totalDistanceTravelled(int data[][2], int busnum);
void minFuelEfficiency(int data[][2], int busnum);
void avgFuelEfficiency(int data[][2], int busnum);
void maxFuelEfficiency(int data[][2], int busnum);
void totalFuelCost(int data[][2], int busnum);
void avgSpeed(int data[][2], int busnum);
void fleetSort(int data[][2], int busnum);

//void fun1(int data[][2], int busnum);
//void fun2(int data[][2], int busnum);
//void fun3(int data[][2], int busnum);
//void fun4(int data[][2], int busnum);

void allBuses(int data[][2], int busnum);
void revenue(int data[][2], int busnum);

//void fun7(int data[][2], int busnum);
//void fun8(int data[][2], int busnum);


int main()
{
	string des;

//	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);

	cout << "---AUTHORISED PERSONNEL ONLY---" << endl;
	cout << "Enter your designation without spaces:" << endl;
	cin >> des;

//	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

	if (des == "fleetmanager")
	{


		const int busnum = 10;        // 10 buses taken
		int fuel, dist;

		int data[busnum][2];

		readData(data, busnum);

		bool run = true;
		int op;

		while (run)
		{

			cout << endl << setw(82) << "---MENU---\n" << endl;
			cout << "Please select any of the following options:" << endl;
			cout << "[1] Total fuel consumption of selected bus" << endl;
			cout << "[2] Total distance travelled by selected bus" << endl;
			cout << "[3] Bus with the minimum fuel efficiency" << endl;
			cout << "[4] Average fuel efficiency for selected bus" << endl;
			cout << "[5] Bus with the maximum fuel efficiency" << endl;
			cout << "[6] Total fuel cost for certain bus" << endl;
			cout << "[7] Average speed for selected bus" << endl;
			cout << "[8] Total fuel consumption and distance travelled by all buses" << endl;
			cout << "[9] Total revenue generated" << endl;
			cout << "[10] Sort data" << endl;
			cout << "[11] Quit" << endl;

			cin >> op; 

			switch (op)
			{

			case 1: totalFuelConsumption(data, busnum);
				break;

			case 2: totalDistanceTravelled(data, busnum);
				break;

			case 3: minFuelEfficiency(data, busnum);
				break;

			case 4: avgFuelEfficiency(data, busnum);
				break;

			case 5: maxFuelEfficiency(data, busnum);
				break;

			case 6: totalFuelCost(data, busnum);
				break;

			case 7: avgSpeed(data, busnum);
				break;

			case 8: allBuses(data, busnum);
				break;

			case 9: revenue(data, busnum);
				break;

			case 10: fleetSort(data, busnum);
				break;

			case 11:
				cout << "You have quit the program" << endl;
				run = false;
				break;

			default: cout << "Invalid Input" << endl;
			}
		}
	}

	else
	{
		cout << "Invalid User - Unauthorised Access" << endl;
	}

}

void readData(int data[][2], int busnum)
{
	cout << "---Input Data---" << endl;
	cout << "Enter the fuel consumption and distance travelled data for each bus:" << endl;
	cout << "(Format e.g: Bus No.1 Fuel, Bus No.1 Distance, Bus No.2 Fuel, Bus No.2 Distance,..." << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> data[i][j];
		}
	}
}

void totalFuelConsumption(int data[][2], int busnum)
{
	int x; int y;
	cout << "Enter the bus number: " << endl;
	cin >> x;
	cout << "Enter the number of days: " << endl;
	cin >> y;

	float z = (data[x - 1][0]* static_cast<float>(y)) / 30;
	cout << "Bus No. " << x << " Fuel Consumption for " << y <<  " days: " << z << "liters" << endl;
}

void totalDistanceTravelled(int data[][2], int busnum)
{
	int x; int y;
	cout << "Enter the bus number: " << endl;
	cin >> x;
	cout << "Enter the number of days: " << endl;
	cin >> y;

	float z = (data[x - 1][1] * static_cast<float>(y)) / 30;
	cout << "Bus No. " << x << " Distance travelled for " << y << " days: " << z << "kilometers" << endl;
}

void minFuelEfficiency(int data[][2], int busnum)
{
	int x[10];

	for (int i = 0; i < busnum; i++)
	{
		x[i] = data[i][1] / data[i][0];
	}

	int small = x[0];
	int y;

	for (int i = 0; i < busnum; i++)
	{
		if (small > x[i])
		{
			small = x[i];
			y = i + 1;
		}
	}

	cout << "Bus with lowest fuel efficiency: Bus No. " << y << endl;
	cout << "Fuel efficiency: " << small << " kmpl" << endl;
}

void avgFuelEfficiency(int data[][2], int busnum)
{
	int x;
	cout << "Enter the bus number: " << endl;
	cin >> x;

	cout << "Bus " << x << ":" << endl;
	cout << "Fuel Efficiency: " << data[x-1][1] / data[x-1][0] << "kmpl" << endl;

}

void maxFuelEfficiency(int data[][2], int busnum)
{
	int x[10];

	for (int i = 0; i < busnum; i++)
	{
		x[i] = data[i][1] / data[i][0];
	}

	int large = x[0];
	int y;

	for (int i = 0; i < busnum; i++)
	{
		if (large < x[i])
		{
			large = x[i];
			y = i + 1;
		}
	}

	cout << "Bus with highest fuel efficiency: Bus No. " << y << endl;
	cout << "Fuel efficiency: " << large << " kmpl" << endl;
}

void totalFuelCost(int data[][2], int busnum)
{
	int x;
	cout << "Enter the bus number: " << endl;
	cin >> x;

	int y;
	cout << "Enter the number of days: " << endl;
	cin >> y;

	cout << "Fuel price per liter: 282 Rs" << endl;

	float z = ((data[x - 1][0] * static_cast<float>(y)) / 30) * 1067;

	cout << "Bus Number " << x << "total fuel cost for " << y << " days: " << z << " Rs." << endl;
}


void avgSpeed(int data[][2], int busnum)
{
	int x;
	cout << "Enter the bus number: " << endl;
	cin >> x;

	float time;
	cout << "Enter the total travel time of the bus for the month: " << endl;
	cin >> time;

	cout << "Average Speed: " << data[x - 1][1] / time << " km/h" << endl;
}


void fleetSort(int data[][2], int busnum)
{
	int x;
	cout << "Sort the data based on: " << endl;
	cout << "[1] Bus Number" << endl;
	cout << "[2] Fuel Effiecieny" << endl;

	cin >> x;

	if (x == 1)
	{
		for (int i = 0; i < busnum; i++)
		{
			cout << "---Sorting by Bus Number---\n" << endl;
			cout << "Bus " << i + 1 << ":" << endl;

			cout << "Fuel Consumption: " << data[i][0] << "liters" << endl;
			cout << "Distance Travelled: " << data[i][1] << "kilometers" << endl;
			cout << "Fuel Efficiency: " << data[i][1] / data[i][0] << "kmpl" << endl;
			cout << "Total fuel cost: " << 282 * data[i][0] << " Rs" << endl << endl;
		}
	}
}

/*void fun1(int data[][2], int busnum)
{
	for (int i = 0; i < busnum; i++)
	{
		cout << "Bus " << i + 1 << ":" << endl;

		cout << "Fuel Consumption: " << data[i][0] << "liters" << endl;
		cout << "Distance Travelled: " << data[i][1] << "kilometers" << endl << endl;
	}
}
void fun2(int data[][2], int busnum)
{
	for (int i = 0; i < busnum; i++)
	{
		cout << "Bus " << i + 1 << ":" << endl;

		cout << "Fuel Efficiency: " << data[i][1] / data[i][0] << "kmpl" << endl << endl;

	}
}

void fun3(int data[][2], int busnum)
{
	int x[10];

	for (int i = 0; i < busnum; i++)
	{
		x[i] = data[i][1] / data[i][0];
	}

	int large = x[0];
	int y;

	for (int i = 0; i < busnum; i++)
	{
		if (large < x[i])
		{
			large = x[i];
			y = i+1;
		}
	}

	cout << "Bus with highest fuel efficiency: Bus No. " << y << endl;
	cout << "Fuel efficiency: " << large << " kmpl" << endl;
}

void fun4(int data[][2], int busnum)
{
	cout << "Cost of fuel per Liter: 282 Rs" << endl;
	cout << "Bus travel time: 6 hours" << endl;
	
	for (int i = 0; i < busnum; i++)
	{
		cout << "Bus " << i + 1 << ":" << endl;
		cout << "Total fuel cost: " << 282 * data[i][0] << " Rs" << endl;
		cout << "Average Speed: " << data[i][1] * 6 << " km/h" << endl << endl;
	}
}
*/

void allBuses(int data[][2], int busnum)
{
	int fuel = 0; 
	int dist = 0;

	for (int i = 0; i < busnum; i++)
	{
		fuel += data[i][0];
		dist += data[i][1];
	}

	cout << "Total fuel consumption of all buses: " << fuel << " liters" << endl;
	cout << "Total distance travelled by all buses: " << dist << endl;
}

void revenue(int data[][2], int busnum)
{
	int pass;
	int fare;

	cout << "Enter the number of total passengers this month: " << endl;
	cin >> pass;

	cout << "Enter the fare charged per passenger: " << endl;
	cin >> fare;

	cout << "Total revenue generated: " << pass * fare << " Rs" << endl;
}	

/* void fun7(int data[][2], int busnum)
{
	int x[10];

	for (int i = 0; i < busnum; i++)
	{
		x[i] = data[i][1] / data[i][0];
	}

	int small = x[0];
	int y;

	for (int i = 0; i < busnum; i++)
	{
		if (small > x[i])
		{
			small = x[i];
			y = i+1;
		}
	}

	cout << "Bus with lowest fuel efficiency: Bus No. " << y << endl;
	cout << "Fuel efficiency: " << small << " kmpl" << endl;
}

void fun8(int data[][2], int busnum)
{
	int x;
	cout << "Sort the data based on: " << endl;
	cout << "[1] Bus Number" << endl;
	cout << "[2] Fuel Effiecieny" << endl;

	cin >> x;

	if (x == 1)
	{
		for (int i = 0; i < busnum; i++)
		{
			cout << "---Sorting by Bus Number---\n" << endl;
			cout << "Bus " << i + 1 << ":" << endl;

			cout << "Fuel Consumption: " << data[i][0] << "liters" << endl;
			cout << "Distance Travelled: " << data[i][1] << "kilometers" << endl;
			cout << "Fuel Efficiency: " << data[i][1] / data[i][0] << "kmpl" << endl;
			cout << "Total fuel cost: " << 282 * data[i][0] << " Rs" << endl << endl;
		}
	}

	/*else
	{
		int x[10];
		int temp;
		int y;

		for (int i = 0; i < busnum; i++)
		{
			x[i] = data[i][1] / data[i][0];
			y = i + 1;
		}

		for (int i = 0; i < 10; i++)
		{
			if (x[i] < x[i + 1])
			{
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}

		cout << "---Sorting by Fuel Efficiency (Highest to Lowest)---\n" << endl;

		for 
	}*/




	

