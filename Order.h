//Order.h
#include"Item.h"
class Order
{
private:

int orderId;
char orderDate[10];
Item *Itm3;

public:

Order();
Order(int borderId, char porderDate[]);
void setOrderdetails(int OId, char ODate);
int getOrderNumber();
void displayOrderDetails();
void statesOfTheOrder();
~Order();
};



