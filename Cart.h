//Cart.h
#include "item.h"
#include "RegisteredCustomer.h"
class Cart
{
private:
  int CartId;
  char dateCreated[10];
  int Quantity;
  Item *Itm1;
  RegisteredCustomer *reg1;

public:
  Cart();
  Cart(int pcartId,char pdatecreated[], int pQuantity);
  void addItem();
  void removeItem();
  int updateQuantity();
};
