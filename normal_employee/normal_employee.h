#pragma once
#include <iostream>
#include <string>
#include "../employee/employee.h"
using namespace std;

class Normal_employee : public Employee
{
public:
	Normal_employee(string id, string name, int age);
	void getResponsibilities();
};