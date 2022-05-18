#include<iostream>
#include<cstring>
#include "Administrator.h"
#include "Cart.h"
#include "Item.h"
#include "Order.h"
#include "Payment.h"
#include "RegisteredCustomer.h"
#include "SalesManager.h"
#include "SalesReport.h"
#include "Staff.h"
#include "StaffDiscountCard.h"
#include "Supplier.h"
#include "UnregisteredCustomer.h"

using namespace std;

int main(void)
{
 Administrator* ad1;
 ad1= new Administrator("c001","chanithi","dep1","adoo1","che22334");


 UnregisteredCustomer* Unreg1;
 Unreg1 = new UnregisteredCustomer(001, "Jagath Perera", "No25,Ampara.", "JAGApera@gmail.com", 778899445); //not matching arguments with function prototype

 RegisteredCustomer* reg1;
 reg1 = new RegisteredCustomer(045, "Malith Fernando", "No98,Anuradhapura", "Cha45@gmail.com", 715458956, "Malith#@i", "1452chan#$");//not matching arguments with function prototype

 Cart* CRT;
 CRT = new Cart(789848, "08/05/2022", 150);

 Item* ITM;
 ITM = new Item("Shirt", 24562, 4950, 750);

 Order*ODR;
 ODR = new Order(1457895, "15/05/2022");

 SalesReport* SlsRpt;
 SlsRpt = new SalesReport("Tshirt0045", 11 / 05 / 2022, 650);

 Staff* STF;
 STF = new Staff("E1015", "Hiruni de Silva", "Department06", "hirudeSliva", "Silva3272@");

 StaffDiscountCard* STFCRD;
 STFCRD = new Staffdiscountcard("SCRD0008");

 Supplier* SUP;
 SUP = new Supplier("SUP0555", "Nimal Jayasinghe", 779875621, 100);

 SalesManager* SaleMan;
 SaleMan = new SalesManager("E1400", "Harsha Dissanayake", "Department04", "harshaDissa", "HRS452@");

 Payment P1;

 Method Calling
 Unreg1->displayDetails();

 ad1->displayDetails();

 reg1->displayDetails();

 ODR->displayOrderDetails();

 SaleMan->displayDetails();

 STF->displayDetails();

 STFCRD->displayDetails();

 SUP->displaySupplierDetails();




 cout << "Rough payment amount for one payment is Rs 5000.00" << endl;

  P1.confirmPayment();
  P1.checkPaymentDetails();

 cout << " Payment quantity for the whole day is 45 " << endl;


 cout << "According to the sales report daily income is " << calDailyIncome(45);

 cout << "quantity of items for one payment is 6 " << endl;

 cout << "Total Bill for all the items is " << calculateTotalPaymentAmount(6);

 cout << "Employee id is : 003" << endl;

 cout << "Employee has obtain 30% discount and your total bill is " << calculateDiscount() << endl;

 cout << "Quantity of restock items is 150" << endl;

 cout << "The total bill that the system should pay for the customer is " << clacRestockItem(150) << endl;


 //----Delete Dynamic Objects----

 delete Unreg1;
 delete reg1;
 delete CRT;
 delete ITM;
 delete ODR;
 delete SlsRpt;
 delete STF;
 delete STFCRD;
 delete SUP;
 delete SaleMan;


 return 0;
}
