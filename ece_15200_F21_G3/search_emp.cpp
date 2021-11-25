#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void searchEmployee(int num, string name[], int empid[],
	string dept[], string doj[], int salary[]) {

	int sch, found = 0;
	
	if (num == 0) {
		cout << "There is no employee information in the record." << endl;
		return;
	}

	cout << "Enter 0 for search by employee ID." << endl
		<< "Otherwise search by name will be performed.";


	// Ask user choice and store it in sch
	// Your code

	cin >> sch;


	// If choice is 0
	// Ask user to input employee ID in a variable eid
	// Scan empid to find a match for eid
	// If a match found, display Name, Department, Start date, and Salary
	// If not matched, display employee with given eid does not exist.
	// Your code

	int eid = 0;


	if (sch == 0)
	{
		cout << "Please enter the employee ID of the employee you wish to search for: ";
		cin >> eid;
		int flag = 0;
		for (int i = 0; i < num; i++)
		{
			if (empid[i] == eid) 
			{
				flag = 1;
				cout << "ID:" << empid[i] << "\n";
				cout << "Name: " << name[i] << "\n";
				cout << "Department: " << dept[i] << "\n";
				cout << "Start Date: " << doj[i] << "\n";
				cout << "Salary: " << salary[i] << "\n" << endl;
			}
			else
			{
				cout << "The employee with the given employee ID does not exist" << endl;
			}
		}
	}

	else
	{
		int j = 0;
		int flag = 0;
		string emp_name;

		cout << "Please enter the name of the employee you wish to search for: ";
		cin >> emp_name;
	
		for (int j = 0; j < num; j++)
		{
			if (name[j].compare(emp_name)==0)
			{
				flag = 1;
				cout << "Employee ID:" << empid[j] << "\n";
				cout << "Name: " << name[j] << "\n";
				cout << "Department: " << dept[j] << "\n";
				cout << "Start Date: " << doj[j] << "\n";
				cout << "Salary: " << salary[j] << "\n";
			}
			else
			{
				cout << "The employee with the given name does not exist" << endl;
			}
		}
	}

	// If choice is other than 0
	// Ask user to input employee name in a variable emp_name
	// Scan name to find a match for emp_name
	// If a match found, display Employee ID, Department, Start date, and Salary
	// If not matched, display employee with given emp_name does not exist.
	// Your code
}