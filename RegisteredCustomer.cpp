//RegisteredCustomer.cpp

#include<iostream>
#include<cstring>

using namespace std:


RegisteredCustomer::RegisteredCustomer()
{
strcpy(custUsername, "");
strcpy(custPassword, "");

}

void RegisteredCustomer::setCustomerDetails()

{
 CustID = 001;
 strcpy(CustName, "Nimal Bandara");
 strcpy(CustAddress, "No 4,polonnaruwa road,siripura.");
 strcpy(CustEmail, "mgNB456@gmail.com");
 CustNo = 767040568;
 strcpy(custUsername, "NimalB457");
 strcpy(custPassword, "WQERsdf12");
}
void RegisteredCustomer::displayDetails()
{
 cout << "CustID :" << CustID << endl;
 cout << "CustName :" << CustName << endl;
 cout << "CustAddress :" << CustAddress << endl;
 cout << "CustEmail :" << CustEmail << endl;
 cout << "CustNo :" << CustNo << endl;
 cout << "custUsername :" << custUsername << endl;

}
void RegisteredCustomer::purchaseItems()
{
 cout << "Item Purchased." << endl;
 cout << "Thank You." << endl;
}
RegisteredCustomer::~RegisteredCustomer()
{
cout << "Destructorer Called." << endl;
}