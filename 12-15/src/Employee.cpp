#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(const std::string &first,
    const std::string &last,const std::string &ssn)
    :firstName(first),lastName(last),socialSecurityNumber(ssn)
{

}

void Employee::print()const
{
    cout<<GetfirstName()<<' '<<GetlastName()<<
    "\nsocial security number: "<<GetsocialSecurityNumber();
}

Employee::~Employee()
{
    //dtor
}
