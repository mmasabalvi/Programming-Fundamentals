#include<iostream>
using namespace std;
int main()
{
	int opt1, opt2, opt3;
	int bill = 0;
	int totalbill;
	int dis;

	cout << "########## --> WELCOME TO FAST CAFE <-- ##########" << endl;
	cout << "Please select the option:" << endl;
	cout << "[0] Takeaway\n[1] Dine in\n[2] Delivery" << endl;
	cout << "Selected Category: " << endl;

	cin >> opt1;

	switch (opt1)
	{
	case 0:
		cout << "########## --> WELCOME TO TAKEAWAY MENU <-- ##########" << endl;
		cout << "[0] Burger\n[1] Paratha Roll\n[2] Pakistani Food" << endl;
		cout << "Selected Category: " << endl;
		cin >> opt2;

		switch (opt2)
		{
			case 0:
				cout << "Select Burger Type:" << endl;
				cout << "[1] PF_Ragra11 (Rs: 299)\n[2] OOP_Chatkhara (Rs:499)\n[3] Hot_DS (Rs: 599)\n[4] RedHot_Algo (Rs:699)" << endl;
				cin >> opt3;

				switch (opt3)
				{
					case 1:
						bill += 299;
					break;

					case 2:
						bill += 499;
					break;

					case 3:
						bill += 599;
					break;

					case 4:
						bill += 699;
					break;
				}
				

			case 1:
				cout << "Select Paratha Roll Type:" << endl;
				cout << "[1] FAST_MalaiParatha (Rs: 299)" << endl;
				cout << "[2] CS_CheeseParatha (Rs: 399)" << endl;
				cout << "[3] DS_DhamakaParatha (Rs: 599)" << endl;
				cout << "[4] AI_DoubleTroubleParatha (Rs: 699)" << endl;
				cout << "[5] CY_SecurityTightParatha (Rs: 499)" << endl;
				cout << "[6] SE_MeethaParatha (Rs: 199)" << endl;
				cout << "[7] EE_ParhakuParatha (Rs: 799)" << endl;
				cin >> opt3;

				switch (opt3)
				{
				case 1:
					bill += 299;
					break;

				case 2:
					bill += 399;
					break;

				case 3:
					bill += 599;
					break;

				case 4:
					bill += 699;
					break;

				case 5:
					bill += 499;
					break;

				case 6:
					bill += 199;
					break;

				case 7:
					bill += 799;
					break;
				}
				

			case 2:
				cout << "Select Pakistani Food Type:" << endl;
				cout << "[1] PointerHaleem (Rs: 199)" << endl;
				cout << "[2] LoopNihari (Rs: 199)" << endl;
				cout << "[3] ArrayDaal (Rs: 149)" << endl;
				cout << "[4] RecursiveGhosht (Rs: 399)" << endl;
				cin >> opt3;

				switch (opt3)
				{
				case 1:
					bill += 199;
					break;

				case 2:
					bill += 199;
					break;

				case 3:
					bill += 149;
					break;

				case 4:
					bill += 399;
					break;
				}
				break;
		}
		break;

	case 1:
		cout << "########## --> WELCOME TO DINE-IN MENU <-- ##########" << endl;
		cout << "[0] Burger\n[1] Paratha Roll\n[2] Pakistani Food" << endl;
		cout << "Selected Category: " << endl;
		cin >> opt2;

		switch (opt2)
		{
		case 0:
			cout << "Select Burger Type:" << endl;
			cout << "[1] PF_Ragra11 (Rs: 299)\n[2] OOP_Chatkhara (Rs:499)\n[3] Hot_DS (Rs: 599)\n[4] RedHot_Algo (Rs:699)" << endl;
			cin >> opt3;

			switch (opt3)
			{
			case 1:
				bill += 299;
				break;

			case 2:
				bill += 499;
				break;

			case 3:
				bill += 599;
				break;

			case 4:
				bill += 699;
				break;
			}
			

		case 1:
			cout << "Select Paratha Roll Type:" << endl;
			cout << "[1] FAST_MalaiParatha (Rs: 299)" << endl;
			cout << "[2] CS_CheeseParatha (Rs: 399)" << endl;
			cout << "[3] DS_DhamakaParatha (Rs: 599)" << endl;
			cout << "[4] AI_DoubleTroubleParatha (Rs: 699)" << endl;
			cout << "[5] CY_SecurityTightParatha (Rs: 499)" << endl;
			cout << "[6] SE_MeethaParatha (Rs: 199)" << endl;
			cout << "[7] EE_ParhakuParatha (Rs: 799)" << endl;
			cin >> opt3;

			switch (opt3)
			{
			case 1:
				bill += 299;
				break;

			case 2:
				bill += 399;
				break;

			case 3:
				bill += 599;
				break;

			case 4:
				bill += 699;
				break;

			case 5:
				bill += 499;
				break;

			case 6:
				bill += 199;
				break;

			case 7:
				bill += 799;
				break;
			}
			

		case 2:
			cout << "Select Pakistani Food Type:" << endl;
			cout << "[1] PointerHaleem (Rs: 199)" << endl;
			cout << "[2] LoopNihari (Rs: 199)" << endl;
			cout << "[3] ArrayDaal (Rs: 149)" << endl;
			cout << "[4] RecursiveGhosht (Rs: 399)" << endl;
			cin >> opt3;

			switch (opt3)
			{
			case 1:
				bill += 199;
				break;

			case 2:
				bill += 199;
				break;

			case 3:
				bill += 149;
				break;

			case 4:
				bill += 399;
				break;
			}
			
		}
		break;

	case 2:
		cout << "########## --> WELCOME TO DELIVERY MENU <-- ##########" << endl;
		cout << "[0] Burger\n[1] Paratha Roll\n[2] Pakistani Food" << endl;
		cout << "Selected Category: " << endl;
		cin >> opt2;

		switch (opt2)
		{
		case 0:
			cout << "Select Burger Type:" << endl;
			cout << "[1] PF_Ragra11 (Rs: 299)\n[2] OOP_Chatkhara (Rs:499)\n[3] Hot_DS (Rs: 599)\n[4] RedHot_Algo (Rs:699)" << endl;
			cin >> opt3;

			switch (opt3)
			{
			case 1:
				bill += 299;
				break;

			case 2:
				bill += 499;
				break;

			case 3:
				bill += 599;
				break;

			case 4:
				bill += 699;
				break;
			}
		

		case 1:
			cout << "Select Paratha Roll Type:" << endl;
			cout << "[1] FAST_MalaiParatha (Rs: 299)" << endl;
			cout << "[2] CS_CheeseParatha (Rs: 399)" << endl;
			cout << "[3] DS_DhamakaParatha (Rs: 599)" << endl;
			cout << "[4] AI_DoubleTroubleParatha (Rs: 699)" << endl;
			cout << "[5] CY_SecurityTightParatha (Rs: 499)" << endl;
			cout << "[6] SE_MeethaParatha (Rs: 199)" << endl;
			cout << "[7] EE_ParhakuParatha (Rs: 799)" << endl;
			cin >> opt3;

			switch (opt3)
			{
			case 1:
				bill += 299;
				break;

			case 2:
				bill += 399;
				break;

			case 3:
				bill += 599;
				break;

			case 4:
				bill += 699;
				break;

			case 5:
				bill += 499;
				break;

			case 6:
				bill += 199;
				break;

			case 7:
				bill += 799;
				break;
			}
			

		case 2:
			cout << "Select Pakistani Food Type:" << endl;
			cout << "[1] PointerHaleem (Rs: 199)" << endl;
			cout << "[2] LoopNihari (Rs: 199)" << endl;
			cout << "[3] ArrayDaal (Rs: 149)" << endl;
			cout << "[4] RecursiveGhosht (Rs: 399)" << endl;
			cin >> opt3;

			switch (opt3)
			{
			case 1:
				bill += 199;
				break;

			case 2:
				bill += 199;
				break;

			case 3:
				bill += 149;
				break;

			case 4:
				bill += 399;
				break;
			}
			
		}
		break;
	}

	totalbill = bill;

	cout << "Total Bill: " << totalbill << endl;

	if (totalbill < 1000)
	{
		dis = 0.05 * totalbill;
	}

	else if (totalbill >= 1000 && totalbill < 1500)
	{
		dis = 0.10 * totalbill;
	}

	else if (totalbill >= 1500 && totalbill < 2000)
	{
		dis = 0.15 * totalbill;
	}

	else if (totalbill >= 2000 && totalbill < 2500)
	{
		dis = 0.20 * totalbill;
	}

	else if (totalbill >= 2500 && totalbill < 3000)
	{
		dis = 0.30 * totalbill;
	}

	else if (totalbill >= 3000)
	{
		dis = 0.50 * totalbill;
	}

	cout << "Discount: " << dis << endl;
	cout << "Final Bill: " << totalbill - dis << endl;


}