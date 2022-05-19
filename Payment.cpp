//Payment.cpp
#include<iostream>
#include<cstring>
using namespace std;
#include "Payment.h"


Payment::Payment()
{
payId = 0;
strcpy(payType,"");
payAmount = 0;
}

void Payment::setPaymentDetails(int pID, char pType[], float pAmount)
{
payId = pID;
strcpy(payType, pType);
payAmount = pAmount;
}


float Payment::getPaymentAmount()
{
return payAmount;
}



float Payment::calculateTotalPaymentAmount(int quantity)
{
return payAmount * quantity;
}



void Payment::confirmPayment()
{
cout << "Payment Confirmed." << endl;
}



void Payment::checkPaymentDetails()
{
cout << "Payment Details Cheked." << endl;
}