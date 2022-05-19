//SalesReport.h
#include"Payment.h"
#include"Order.h"
class SalesReport
{
private:

char reportId[10];
int createDate;
int dailyQty;
Payment *pay2;
Order *Ord2;

public:

SalesReport();
SalesReport(char rID[], int date, int dlyQty);
void setReportDetails(int dQty);
char getReportId();
float calDailyIncome();
~SalesReport();

};

