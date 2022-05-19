//SalesReport.cpp
#include<iostream>
#include<cstring>
#include"SalesReport.h"
using namespace std;


SalesReport::SalesReport()
{
strcpy(reportId, "It2132");
createDate = 0;
dailyQty = 0;
}

SalesReport::SalesReport(char rID[], int date, int dlyQty)
{
strcpy(reportId, rID);
createDate = date;
dailyQty = dlyQty;
}

void SalesReport::setReportDetails(int dQty)
{
dailyQty = dQty;
}

char SalesReport::getReportId()
{
return reportId[];
}

float SalesReport::calDailyIncome()
{
return 6500.00 * dailyQty;
}

SalesReport::~SalesReport()
{
cout << "Destructor Called " << endl;
}

