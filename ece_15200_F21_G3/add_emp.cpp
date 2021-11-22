#include "edms.h"

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

void addEmployee(int &num, string name[], int empid[], 
	string dept[], string doj[], int salary[]) {
	
	int id, loc = num;

	if (num < 100) {

		cout << "Enter employee ID: (A 5-Digit number between 10000 and 99999) ";
		cin >> id;		

		if (id >= 10000 && id < 100000) {

		if (num >= 1) {
			for (int i = 0; i < num; i++) {
				if (id < empid[i]) {
					loc = i;
					break;
				}
			}

			for (int i = num - 1; i >= loc; i--) {
				name[i + 1] = name[i];
				empid[i + 1] = empid[i];
				dept[i + 1] = dept[i];
				doj[i + 1] = doj[i];
				salary[i + 1] = salary[i];
			}
		}

		empid[loc] = id;


			cout << "Enter employee's name: ";
			cin.ignore();
			getline(cin, name[loc]);

			cout << "Enter employee's department: (Marketing, Finance, Human Resource, or Technical) ";
			getline(cin, dept[loc]);

			if (dept[loc] == "Marketing" || dept[loc] == "Finance" || dept[loc] == "Human Resource" || dept[loc] == "Technical") {
				
				cout << "Enter employee's start date: (MM/DD/YYYY) ";
				cin >> doj[loc];

				
				if (doj[loc] == "##/##/####") {

					cout << "Enter employee's annual salary: (Between 30000 and 200000) ";
					cin >> salary[loc];

					if (salary[loc] >= 30000 && salary[loc] <= 200000) {
						num = num + 1;

					}
					else {
						cout << "You must enter a valid salary." << endl;

					}
					
				}
				else {
					cout << "You must enter a proper date of join." << endl;

				}


			}
			else {
				cout << "You must enter the proper department." << endl;

			}

		}
		else {
			cout << "Your employee ID must be between 10000 and 99999." << endl;

		}


	}

	else {
		cout << "There are too many employees in the database. Please delete one or more before you proceed. " << endl;
	}
}