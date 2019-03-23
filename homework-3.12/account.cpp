#include<iostream>
#include<string>
#include"account.h"

using namespace std;

account::account(double number)
{
    setaccount(number);
}
void account::setaccount(double number)
{
    if(number>=0)
    {
        money=number;
    }
    else
    {
        cout<<"Invalid number!"<<endl;
        money=0;
    }
}
void account::credit(double number)
{
    if(number>=0)
    {
        money=money+number;
    }
    else
    {
        cout<<"Please input valid number !"<<endl;
    }
}
void account::debit(double number)
{
    if(number<=money)
    {
        money=money-number;
    }
    else
    {
        cout<<"Dibit amount exceeded account balance. "<<endl;;
    }
}
double account::getbalance()
{
    return money;
}
