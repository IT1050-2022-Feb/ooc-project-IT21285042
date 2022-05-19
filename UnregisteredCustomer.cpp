//UnregisteredCustomer.cpp

#include<cstring>
#include<iostream>

using namespace std;

UnregisteredCustomer::UnregisteredCustomer()
{
CustID = 0;
strcpy(CustName, "");
strcpy(CustAddress, "");
strcpy(CustEmail, "");
CustNo = 0;

}

void UnregisteredCustomer::registerUser(int CID,char Name[], char Address[], char Email[], int TNo)
{
CustID = CID;
strcpy(CustName, "Name");
strcpy(CustAddress, "Address");
strcpy(CustEmail, "Email");
CustNo = TNo;
}
void UnregisteredCustomer::displayDetails()
{
cout << "CustID :" << CustID << endl;
cout << "CustName :" << CustName << endl;
cout << "CustAddress :" << CustAddress << endl;
cout << "CustEmail :" << CustEmail << endl;
cout << "CustNo :" << CustNo << endl;
}
void UnregisteredCustomer::searchItems()
{

}
UnregisteredCustomer::~UnregisteredCustomer()
{
cout << "Destructor called" << endl;
}
