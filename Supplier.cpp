//Supplier.cpp
#include <iostream>
#include <cstring>
#include "Supplier.h"
using namespace std;



Supplier::Supplier()
{
strcpy(supplierId, "");
strcpy(name, "");
contactNo = 0;
restockQty = 0;
}



Supplier::Supplier(char sID[], char sName[], int cNo, int restkQty)
{
strcpy(supplierId, sID);
strcpy(name, sName);
contactNo = cNo;
restockQty = restkQty;
}

void Supplier::setSupplierDetails(char yID[], char yName[], int yNo, int yrestkQty)
{
strcpy(supplierId, yID);
strcpy(name, yName);
contactNo = yNo;
restockQty = yrestkQty;
}

void Supplier::displaySupplierDetails()
{
cout << "Supplier ID : " << supplierId << endl;
cout << "Supplier Name : " << name << endl;
cout << "Supplier Contact No : " << contactNo << endl;
}

float Supplier::clacRestockItem(int restkQty)
{
return restockQty * 4950.00;
}