#include "CommissionEmployee.h"

#include <iostream>
#include <stdexcept>

using namespace std;

CommissionEmployee::CommissionEmployee(const std::string &first,
    const std::string &last,const std::string &ssn ,const int &birth,double gross,double rate)
    :Employee(first,last,ssn,birth)
{
    setgrossSalary(gross);
    setCommissionRate(rate);
}

void CommissionEmployee::setgrossSalary(const double gross)
{
    if(gross>=0.0)
    {
        grossSalary=gross;
    }
    else
    throw invalid_argument("gross salary is must >=0.0!");
}

void CommissionEmployee::setCommissionRate(const double rate)
{
    if(rate>0.0 && rate<1.0)
    {
        CommissionRate=rate;
    }
    else
        throw invalid_argument("Commission rate is must in 0.0~1.0 !");
}

double CommissionEmployee::earnings()const
{
    return getCommissionRate()*getgrossSalary();
}

void CommissionEmployee::print()const
{
    cout<<"commission employee : ";
    Employee::print();
    cout<<"\ngross sales : "<<getgrossSalary()
    <<"; commission rate : "<<getCommissionRate();
}

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}
