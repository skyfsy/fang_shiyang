#include "SalariedEmployee.h"

#include <iostream>
#include <stdexcept>

using namespace std;

SalariedEmployee::SalariedEmployee(const std::string & first,const std::string &last,const std::string &ssn,const int &birth,double salary)
:Employee(first,last,ssn,birth)
{
    SetweeklySalary(salary);
}

void SalariedEmployee::SetweeklySalary(const double salary)
{
    if(salary>=0.0)
    {
        weeklySalary=salary;
    }
    else
        throw invalid_argument("weekly salary is must >=0.0!");
}

double SalariedEmployee::earnings()const
{
    return GetweeklySalary();
}

void SalariedEmployee::print()const
{

    cout<<"salary employee : ";
    Employee::print();
    cout<<"\nweekly salary : "<<GetweeklySalary();
}

SalariedEmployee::~SalariedEmployee()
{

}
