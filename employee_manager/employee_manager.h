#pragma once
#include <iostream>
#include "../employee/employee.h"
using namespace std;

class EmployeeManager
{
public:
	int m_Size;
	Employee ** m_Arr;
	EmployeeManager();
	~EmployeeManager();
	void showMenu();
	void exitingSystem();
	void addEmployee(Employee &e);
};