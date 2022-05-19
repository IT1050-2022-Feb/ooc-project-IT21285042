//Administrator.cpp
#include<iostream>
#include<cstring>
#include "Administrator.h"


Administrator::Administrator()
{
strcpy(empId, "");
strcpy(empName, "");
strcpy(empDeparment, "");
strcpy(empUserName, "");
strcpy(empPassword, "");
}
Administrator::Administrator(char eId[], char eName[], char emDep[], char eUserN[], char eUserP[]):void setLoginDetails( eId, eName,eDep, eUserN,eUserP);
{
strcpy(empId, "eId");
strcpy(empName, "eName");
strcpy(empDeparment, "emDep");
strcpy(empUserName, "eUserN");
strcpy(empPassword, "eUserP ");
}
void Administrator::setlogingDetails()
{
strcpy(empUserName, "empUsername");
strcpy(empPassword, "pempPassword");
}
void Administrator::updateSuppplierDetails()
{
cout << "Supplier Details Updated." << endl;
}
void Administrator:: displayDetails()


{
cout << "adId" << empId << endl;
cout << "name" << empName << endl;
cout << "department" << empDeparment << endl;
cout << "username" << empUserName << endl;

}