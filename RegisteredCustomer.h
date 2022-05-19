//RegisteredCustomer.h

#include<iostream>
#include<cstring>
#include"Cart.h" 
#include"Item.h"
#include"Payment.h"
#include"UnrgisteredCustomer.h"

using namespace std;


class RegisteredCustomer : public UnregisteredCustomer

{
protected:

    char custUsername[10];
    char custPassword[10];
    Cart*crt2;
    Payment*pay3;
    Item*itm5;


public:

    RegisteredCustomer();
    void setCustomerDetails();
    void displayDetails();
    void purchaseItems();
    ~RegisteredCustomer();

};