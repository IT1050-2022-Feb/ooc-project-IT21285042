//Supplier.h
#include <iostream>
#include <cstring>
#include "item.h"
class Supplier
{
private:

 char supplierId[10];
 char name[30];
 int contactNo;
 int restockQty;
 item*itm2;

public:

 Supplier();
Supplier(char sID[], char sName[], int cNo, int restkQty);
void setSupplierDetails(char sID[], char sName[], int cNo, int restkQty);
void displaySupplierDetails();
float clacRestockItem(int restkQty);
};