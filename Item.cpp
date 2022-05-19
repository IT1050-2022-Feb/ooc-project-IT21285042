//Item.cpp
#include<iostream>
#include<cstring>
#include"item.h"
using namespace std;

Item::Item()
{
  strcpy( itemName,"");
  itemNumber = 0;
  itemPrice = 0;
  itemQuantity = 0;
}

Item::Item(char citemname[], int citemnum, int citemprice, int citemqty)
{
  strcpy(itemName, "citemname");
  itemNumber = citemnum;
  itemPrice = citemprice;
  itemQuantity = citemqty;
}

void Item::setItemDetails(char Iname[],int Ino,int Iprice ,int Iqty)
{
  strcpy(itemName, "Iname");
  itemNumber = Ino;
  itemPrice = Iprice;
  itemQuantity = Iqty;
}

int Item::getItemNumber()
{
  return itemNumber;
}

void Item::updateItemDetails()
{
  cout << "Item Details Updated. " << endl;
}

Item::~Item()
{
  cout << "Destructor called" << endl;
}


