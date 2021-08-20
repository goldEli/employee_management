#include <string>
#include "normal_employee.h"
using namespace std;

void Normal_employee::showInfo()
{
	cout << "employee id： " << this->m_Id
			 << " \temployee name： " << this->m_Name
			 << " \tjob title：" << this->getJobTitle()
			 << " \tJob responsibilities: complete the tasks assigned by the manager" << endl;
}
string Normal_employee::getJobTitle()
{
	return string("normal employee");
};

Normal_employee::Normal_employee(string id, string name, int age)
{
	this->m_Age = age;
	this->m_Id = id;
	this->m_Name = name;
}