//StaffDiscountCard.cpp
#include<iostream>
#include<cstring>
using namespace std;
#include "StaffDiscountCard.h"


using namespace std;


StaffDiscountCard::StaffDiscountCard()
{
strcpy(cardId, "");
}
StaffDiscountCard::StaffDiscountCard(char discardId[])
{
strcpy(cardId, discardId);
}
float StaffDiscountCard::calculateDiscount()
{
return 6500.00 * (70 / 100);
}
void StaffDiscountCard::displayEmployeeDetails()
{
cout << "Card Id:" << cardId << endl;
cout << "Employee ID :" << empId << endl;
cout << "Employee Name :" << empName << endl;
cout << "Employee Departmenet :" << empDepratment << endl;
cout << "Employee UserName :" << empUserName << endl;
}