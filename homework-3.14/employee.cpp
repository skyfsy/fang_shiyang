#include<iostream>
#include<string>
#include"employee.h"

using namespace std;

employee::employee(string name1,string name2,double number)
{
    setfirst(name1);
    setlast(name2);
    setmoney(number);
}
void employee::setfirst( string name1)
{
    first=name1;
}
void employee::setlast(string name2)
{
    last=name2;
}
void employee::setmoney(double number)
{
    if(number<0)
    {
        money=0;
    }
    else
    {
        money=number;
    }
}
string employee::getfirst()
{
    return first;
}
string employee::getlast()
{
    return last;
}
double employee::getmoney()
{
    return money;
}
double employee::up()
{
    money+=money*0.1;
}
void employee::dissplaymessage()
{
    cout<<getfirst()<<getlast()<<" : "<<getmoney()<<endl;
}
