//Payment.h
#include<iostream>
#include<cstring>
#include "RegitredCustomer.h"
#include "Item.h"

class Payment
{
private:


 int payId;
char payType[10];
double payAmount;
RegisterdCustomer* Reg3;
Item* Itm4;

public:


 Payment();
void setPaymentDetails(int pID, char pType[], float pAmount);
float getPaymentAmount();
float calculateTotalPaymentAmount(int qunty);
void confirmPayment();
void checkPaymentDetails();
};