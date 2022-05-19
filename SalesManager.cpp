//SalesManager.cpp
#include<iostream>
#include<cstring>
#include"SalesManager.h"
#include"Staff.h"
using namespace std;

SalesManager::SalesManager()
{
strcpy(empId, "");
strcpy(empName, "");
strcpy(empDeparment, "");
strcpy(empUserName, "");
strcpy(empPassword, "");
}

SalesManager::SalesManager(char eId[], char eName[], char emDep[], char eUserN[], char eUserP[]):void setLoginDetails( eId, eName,eDep, eUserN,eUserP);
{

strcpy(empId, "eId");
strcpy(empName, "eName");
strcpy(empDeparment, "emDep");
strcpy(empUserName, "eUserN");
strcpy(empPassword, "eUserP");
}

void SalesManager::setLogingDetails(const char eId,const char eUsrname ,const char ePassword)
{
strcpy(empId, eId);
strcpy(empUserName, eUsrname);
strcpy(empPassword, ePassword);
}

void SalesManager::displayDetails()
{
cout << "Employee Id :" << empId << endl;
cout << "Employee UserName :" << empUserName << endl;
}

int SalesManager::getEmployeeId()
{
return empId;
}