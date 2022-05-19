//Order.cpp
#include<iostream>
#include<cstring>
#include"Order.h"
using namespace std;

Order:: Order()
{
orderId = 0;
strcpy(orderDate, "");
}

Order::Order(int borderId, char porderDate[])
{
orderId = borderId;
strcpy(orderDate, "porderDate");
}

void Order::setOrderdetails(int OId,char ODate)
{
orderId = OId;
strcpy(orderDate, "ODate");
}

int Order::getOrderNumber()
{
return orderId;
}

void Order::displayOrderDetails()
{
cout << "Order ID :" << orderId << endl;
cout << "Order Date :" << orderDate << endl;
}

void Order::statesOfTheOrder()
{
cout << "order has being shiped." << endl;
}

Order::~Order()
{
cout << "Destructor Called" << endl;
}
