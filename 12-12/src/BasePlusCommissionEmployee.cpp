#include "BasePlusCommissionEmployee.h"

#include <stdexcept>
#include <iostream>

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const std::string &first,
    const std::string &last,const std::string &ssn,const int &birth,double gross,double rate,double base)
    :CommissionEmployee(first,last,ssn,gross,birth,rate)
{
    SetbaseSalary(base);
}

void BasePlusCommissionEmployee::SetbaseSalary(const double base)
{
    if(base>=0.0)
    {
        baseSalary=base;
    }
    else
    throw invalid_argument("base salary is must >=0.0!");
}

double BasePlusCommissionEmployee::earnings()const
{
    return GetbaseSalary()+CommissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print()const
{
    cout<<"base-salary ";
    CommissionEmployee::print();
    cout<<"; base salary : "<<GetbaseSalary();
}

BasePlusCommissionEmployee::~BasePlusCommissionEmployee()
{
    //dtor
}
