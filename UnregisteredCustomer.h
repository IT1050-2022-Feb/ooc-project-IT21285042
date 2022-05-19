//UnregisteredCustomer.h

#include<iostream>
#include<cstring>
#include"Item.h"

using namespace std;


class UnregisteredCustomer
{
protected:

int CustID;
    char CustName[30];
    char CustAddress[50];
    char CustEmail[20];
    int CustNo;
    Item*itm6;

public:

    UnregisteredCustomer();
    void registerUser(int CID, char Name[], char Address[], char Email[], int TNo);
    void displayDetails();
    void searchItems();
    ~UnregisteredCustomer();

};
