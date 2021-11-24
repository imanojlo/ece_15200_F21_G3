#include "edms.h"
#include<iostream>
using namespace std;

/*
 num:    number of employees in the record
 name:   array contains employees' names
 empid:  array contains employees' IDs
 dept:   array contains employees' departments
 doj:    array contains employees' start date
 salary: array contains employess' annual salary
*/

Void updateEmployee(int num, string *name[], int *empid[], string *dept[], string *doj[], int *salary[])
{

    int eid;
    if (num >= 1) {
        cout << "\nEnter employee ID: ";
        cin >> eid;
        int flag = 0;
        for (int i = 0; i < num; i++) {
            if (empid[i] == eid) {
                flag = 1;
                cout << "Enter 1 to update department" << endl;
                cout << "Enter 2 to update salary" << endl;
                cout << "Enter 3 to update both" << endl;
                int choice;
                cin >> choice;

                string d;
                int sal;
                if (choice == 1 || choice == 3) {
                    cin.ignore();
                    while (1) {
                        cout << "Enter new department: ";
                        cin >> d;

                        if (d == "Marketing" || d == "Finance" || d == "Human Resource" || d == "Technical") {
                            dept[i] = d;
                            break;
                        }
                        else {
                            cout << "Department should be among [Marketing,Finance,Human Resource,Technical]. Try Again\n";
                        }
                    }
                }
                if (choice == 2 || choice == 3) {
                    while (1) {
                        cout << "Enter new salary: ";
                        cin >> sal;

                        if (sal >= 30000 && sal <= 200000) {
                            salary[i] = sal;
                            break;
                        }
                        else {
                            cout << "Salary should be in the range from 30000 to 200000. Try Again\n";
                        }
                    }
                }
                break;

            }

        }
        if (flag == 0) {
            cout << "There is no employee information in the record." << endl;
        }

    }
    else {
        cout << "There is no employee information in the record." << endl;
    }
}