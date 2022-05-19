//Administrator.h
#include<iostream>
#include<cstring>
#include "Staff.h"


class Administrator : public Staff
{

 public:


 Administrator();
Administrator (char eId[], char eName[], char emDep[], char eUserN[], char eUserP[]);
void setlogingDetails();
void updateSuppplierDetails();
void displayDetails();
~Administrator();


};