//Item.h
#include"cart.h"
#include "RegisteredCustomer.h"
#include "Payment.h"
#include "Order.h"
#include "Supplier.h"

class Item
{
private:
  char itemName[20];
  int itemNumber;
  double itemPrice;
  int itemQuantity;
  Cart *crt1;
  RegisteredCustomer *reg2;
  Payment *pay1;
  Order *ord1;
  Supplier *supp1;

public:
  Item ();
  Item(char citemname[], int citemnum, int citemprice, int citemqty);
  void setItemDetails(char Iname[], int Ino, int Iprice, int Iqty);
  int getItemNumber();
  void updateItemDetails();
  ~Item();
};
