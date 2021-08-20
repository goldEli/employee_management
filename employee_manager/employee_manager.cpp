#pragma once
#include "employee_manager.h"
#include "../employee/employee.h"
#include "../normal_employee/normal_employee.h"
#include <iostream>
#include <string>
using namespace std;

EmployeeManager::EmployeeManager()
{
}

EmployeeManager::~EmployeeManager()
{
}

void EmployeeManager::showMenu()
{
	cout << "*****************************************************" << endl;
	cout << "******Welocme to the Employee Management System******" << endl;
	cout << "*****************************************************" << endl;
	cout << "0. Exit Management System" << endl;
	cout << "1. Add employee information" << endl;
	cout << "2. Show employee information" << endl;
	cout << "3. Delete employees" << endl;
	cout << "4. Modify employee information" << endl;
	cout << "5. find employee information" << endl;
	cout << "6. Sort by index" << endl;
	cout << "7. Clear all document" << endl;
	cout << endl;
	cout << endl;

	cout << "please input number:" << endl;
}

void EmployeeManager::exitingSystem()
{
	cout << "Welcome for next time!" << endl;
	system("read -n 1 -s -p \"Press any key to continue...\"");
	exit(0);
}

void EmployeeManager::addEmployee(Employee &e){
	int select = 1;
	cout << "1. normal employee" << endl;
	cout << "2. manager" << endl;
	cout << "3. boss" << endl;
	cin >> select;

	switch (select)
	{
	case 1:
		{
			string id = "";
			cout << "please input id:" << endl;
			cin >> id;
			string name = "";
			cout << "please input name:" << endl;
			cin >> id;
			int age = 0;
			cout << "please input age:" << endl;
			cin >> age;

			Employee *e = new Normal_employee(id, name, age);

			
		}
		break;
	
	default:
		break;
	}
};