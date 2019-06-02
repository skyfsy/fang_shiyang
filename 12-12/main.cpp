#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <ctime>

#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void p(const Employee * const ,int r);

int main()
{
    SalariedEmployee mySalariedEmployee("John", "Smith", "111-11-1111",5,800);
    CommissionEmployee myCommissionEmployee("Sue", "Jones", "333-33-3333", 9, 10000, .06 );
    BasePlusCommissionEmployee myBasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444",5000,3 ,.04, 300 );
    vector < Employee * > employees( 3 );
    employees[ 0 ] = &mySalariedEmployee;
    employees[ 1 ] = &myCommissionEmployee;
    employees[ 2 ] = &myBasePlusCommissionEmployee;
    for(int i=1;i<=12;i++)
    {
        p(employees[0],i);
        p(employees[1],i);
        p(employees[2],i);
    }
}

void p(const Employee *const ptr,int r)
{
    ptr->print();
    if(r==ptr->getbirthDate())
    cout<<"\n\nbecause birthday^-^  "<<"\nearn $"<<ptr->earnings()+100<<endl;
    else
       cout<<"\nearn $"<<ptr->earnings()<<endl;;
}
