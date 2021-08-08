#include <iostream>
#include "./employee_manager/employee_manager.h"
using namespace std;

int main(int argc, char **argv)
{
	EmployeeManager em;

	int choice = 0;

	while (true)
	{
		em.showMenu();
		cin >> choice;
		switch (choice)
		{
		case 0: // exit
			// em.exitingSystem();
			return 0;
		case 1: // add
			break;
		case 2: // show
			break;
		case 3: // delete
			break;
		case 4: // modify
			break;
		case 5: // find
			break;
		case 6: // sort
			break;
		case 7: // clear
			break;
		default:
			system("clear");
			break;
		}
	};
	return 0;
};