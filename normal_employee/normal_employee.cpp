#include <string>
#include "normal_employee.h"
using namespace std;

void Normal_employee::getResponsibilities()
{
	cout << "normal employee: Responsible for execution" << endl;	
}


Normal_employee::Normal_employee(string id, string name, int age)
{
	this->m_Age = age;
	this->m_Id = id;
	this->m_Name = name;
}