#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee
{

public:
	string m_Name;
	string m_Id;
	int m_Age;
	virtual void getResponsibilities();
};