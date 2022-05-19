// StaffDiscountCard.h
#include<iostream>
#include<cstring>

class StaffDiscountCard
{
private:

 char cardId[10];

public:

 StaffDiscountCard();
StaffDiscountCard(char discardId[]);
float calculateDiscount();
void displayEmployeeDetails();


};