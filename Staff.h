//staff.h
#include<cstring>
#include<iostream>
#include "StaffDiscountCard.h"

using namespace std;

class Staff
{
protected:
char empId[10];
char empName[30];
char empDeparment[20];
char empUserName[10];
char empPassword[10];



 public:



 Staff();
void setLoginDetails(char eID[], char eName[], char eDep[], char eUserN[], char eUserP[]);
void displayDetails();
char getEmployeeId();
char getEmployeeName();
~Staff();




};