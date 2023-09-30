#include<iostream>
using namespace std;
int main()
{
	char op;

	cout << "SCENE ASSESSMENT" << endl << endl;
	cout << "Is the scene safe? (Y or N): ";
	cin >> op;
	
	if (op == 'N')
	{
		cout << "\n***Eliminating Hazard***"<< endl;
		cout << "\nIs hazard eliminated? (Y or N): ";
		cin >> op;
			
		if (op == 'N')
		{
			cout << "\n***Removing Patient from Hazards***" << endl;
			cout << "\nHas patient been moved safely? (Y or N): ";
			cin >> op;
				
			if (op == 'N')
			{
				cout << "\n***Calling for and awaiting backup to make the scene safe***" << endl;
				cout << "\n***Assessing the Patient***" << endl;
				cout << "***Conducting Primary Survey***" << endl;
				cout << "***Providing Critical Intervention***" << endl << endl;
				cout << "Is the Patient stable now? (Y or N): ";
				cin >> op;

				if (op == 'N')
				{
					cout << "\n***Taking Patient History***" << endl;
					cout << "***Pulling Insurance details***" << endl;
					cout << "***Transport***" << endl;
					cout << "***Checking vitals***" << endl;
					cout << "***Reassessing Patient's condition***" << endl;
					cout << "***Beginning Transport***" << endl;
					cout << "***Packagaing Patient***" << endl;
					cout << "***Beginning Treatment***" << endl;
					cout << "***Handing Patient over to higher level of care***" << endl;
				}

				else
				{
					cout << "\n***Taking Patient History***" << endl;
					cout << "***Pulling Insurance details***" << endl;
					cout << "***Transport***" << endl;
					cout << "***Packagaing Patient***" << endl;
					cout << "***Beginning Transport***" << endl;
					cout << "***Checking vitals***" << endl;
					cout << "***Reassessing Patient's condition***" << endl;
					cout << "***Beginning Treatment***" << endl;
					cout << "***Handing Patient over to higher level of care***" << endl;
				}
			}

			else
			{
				cout << "\n***Assessing the Patient***" << endl;
				cout << "***Conducting Primary Survey***" << endl;
				cout << "***Providing Critical Intervention***" << endl<< endl;
				cout << "Is the Patient stable now? (Y or N): ";
				cin >> op;

				if (op == 'N')
				{
					cout << "\n***Taking Patient History***" << endl;
					cout << "***Pulling Insurance details***" << endl;
					cout << "***Transport***" << endl;
					cout << "***Checking vitals***" << endl;
					cout << "***Reassessing Patient's condition***" << endl;
					cout << "***Beginning Transport***" << endl;
					cout << "***Packagaing Patient***" << endl;
					cout << "***Beginning Treatment***" << endl;
					cout << "***Handing Patient over to higher level of care***" << endl;
				}

				else
				{
					cout << "\n***Taking Patient History***" << endl;
					cout << "***Pulling Insurance details***" << endl;
					cout << "***Transport***" << endl;
					cout << "***Packagaing Patient***" << endl;
					cout << "***Beginning Transport***" << endl;
					cout << "***Checking vitals***" << endl;
					cout << "***Reassessing Patient's condition***" << endl;
					cout << "***Beginning Treatment***" << endl;
					cout << "***Handing Patient over to higher level of care***" << endl;
				}
					
					
			}
				
				
		}

		else 
		{
			cout << "\n***Assessing the Patient***" << endl;
			cout << "***Conducting Primary Survey***" << endl;
			cout << "***Providing Critical Intervention***" << endl << endl;
			cout << "Is the Patient stable now? (Y or N): ";
			cin >> op;

			if (op == 'N')
			{
				cout << "\n***Taking Patient History***" << endl;
				cout << "***Pulling Insurance details***" << endl;
				cout << "***Transport***" << endl;
				cout << "***Checking vitals***" << endl;
				cout << "***Reassessing Patient's condition***" << endl;
				cout << "***Beginning Transport***" << endl;
				cout << "***Packagaing Patient***" << endl;
				cout << "***Beginning Treatment***" << endl;
				cout << "***Handing Patient over to higher level of care***" << endl;
			}

			else
			{
				cout << "\n***Taking Patient History***" << endl;
				cout << "***Pulling Insurance details***" << endl;
				cout << "***Transport***" << endl;
				cout << "***Packagaing Patient***" << endl;
				cout << "***Beginning Transport***" << endl;
				cout << "***Checking vitals***" << endl;
				cout << "***Reassessing Patient's condition***" << endl;
				cout << "***Beginning Treatment***" << endl;
				cout << "***Handing Patient over to higher level of care***" << endl;
			}

		}
		
	
	
	}

	else 
	{
		cout << "\n***Assessing the Patient***" << endl;
		cout << "***Conducting Primary Survey***" << endl;
		cout << "***Providing Critical Intervention***" << endl << endl;
		cout << "Is the Patient stable now? (Y or N): ";
		cin >> op;

		if (op == 'N')
		{
			cout << "\n***Taking Patient History***" << endl;
			cout << "***Pulling Insurance details***" << endl;
			cout << "***Transport***" << endl;
			cout << "***Checking vitals***" << endl;
			cout << "***Reassessing Patient's condition***" << endl;
			cout << "***Beginning Transport***" << endl;
			cout << "***Packagaing Patient***" << endl;
			cout << "***Beginning Treatment***" << endl;
			cout << "***Handing Patient over to higher level of care***" << endl;
		}

		else
		{
			cout << "\n***Taking Patient History***" << endl;
			cout << "***Pulling Insurance details***" << endl;
			cout << "***Transport***" << endl;
			cout << "***Packagaing Patient***" << endl;
			cout << "***Beginning Transport***" << endl;
			cout << "***Checking vitals***" << endl;
			cout << "***Reassessing Patient's condition***" << endl;
			cout << "***Beginning Treatment***" << endl;
			cout << "***Handing Patient over to higher level of care***" << endl;
		}

	}

}