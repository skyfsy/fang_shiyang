#include<iostream>
#include<string>

using namespace std;

class date
{
public:
    explicit date(int ,int ,int );
    void setyear(int);
    void setmonth(int);
    void setday(int);
    int getyear();
    int getmonth();
    int getday();
    void displaymessage();
private:
    int year,month,day;
};
