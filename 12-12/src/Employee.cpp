#include "Employee.h"

#include <iostream>

using namespace std;

Employee::Employee(const std::string &first,
    const std::string &last,const std::string &ssn,const int &birth)
    :firstName(first),lastName(last),socialSecurityNumber(ssn),birthDate(birth)
{

}

void Employee::print()const
{
    cout<<GetfirstName()<<' '<<GetlastName()<<
    "\nsocial security number: "<<GetsocialSecurityNumber();
}

Employee::~Employee()
{

}
