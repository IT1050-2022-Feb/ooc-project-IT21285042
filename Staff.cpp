//Staff.cpp
#include <iostream>
#include <cstring>
#include "Staff.h"
using namespace std;

Staff::Staff()
{
strcpy(empId, "");
strcpy(empName, "");
strcpy(empDeparment, "");
strcpy(empUserName, "");
strcpy(empPassword, "");
}

void Staff::setLoginDetails(char eID[], char eName[], char eDep[], char eUserN[], char eUserP[])
{
strcpy(empId, eID);
strcpy(empName, eName);
strcpy(empDeparment, eDep);
strcpy(empUserName, eUserN);
strcpy(empPassword, eUserP);
}

void Staff::displayDetails()
{
cout << "Employee ID :" << empId << endl;
cout << "Employee Name :" << empName << endl;
cout << "Employee Departmenet :" << empDeparment << endl;
cout << "Employee UserName :" << empUserName << endl;
}



char Staff::getEmployeeId()
{
return empId;
}

char Staff::getEmployeeName()
{
return empName;
}
Staff::~Staff()
{
cout << "Destructor called" << endl;
}