#include"date.h"

date::date(int year0,int month0,int day0)
{
    setyear(year0);
    setmonth(month0);
    setday(day0);
}
void date::setyear(int year0)
{
    year=year0;
}
void date::setmonth(int month0)
{
    if(month0<13 && month0>0)
    {
        month=month0;
    }
    else
    {
        month=1;
    }
}
void date::setday(int day0)
{
    day=day0;
}
int date::getyear()
{
    return year;
}
int date::getmonth()
{
    return month;
}
int date::getday()
{
    return day;
}
void date::displaymessage()
{
    cout<<getyear()<<"/"<<getmonth()<<"/"<<getday()<<endl;
}
