//Cart.cpp
#include<iostream>
#include<cstring>
#include"cart.h"
using namespace std;

Cart::Cart()
{
  CartId = 0;
  strcpy(dateCreated, "");
  Quantity = 0;
}

Cart::Cart(int pcartId, char pdatecreated[], int pQuantity)
{
  CartId = pcartId;
  strcpy(dateCreated, "pdatecreated");
  Quantity = pQuantity;
}

void Cart::addItem()
{
  cout << "newly added items. " << endl;  
}

void Cart::removeItem()
{
  cout << "Removed items. " << endl;
}

int Cart::updateQuantity()
{
  return Quantity;
}

