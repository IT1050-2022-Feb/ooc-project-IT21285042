//SalesManager.h
#include"Staff.h"

class SalesManager : public Staff

{
public:

SalesManager();
SalesManager(char eId[], char eName[], char emDep[], char eUserN[], char eUserP[]);
void displayDetails();
int getEmployeeId();
void setLogingDetails(const char eId,const char eUsrname ,const char ePassword);

};
