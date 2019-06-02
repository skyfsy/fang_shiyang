#include "HourlyWorker.h"

#include <iostream>

using namespace std;

HourlyWorker::HourlyWorker(const std::string &first,const
                 std::string &last,const std::string &ssn,double wa,double h)
                 :Employee(first,last,ssn)
{
    Setwage(wa);
    Sethours(h);
}

double HourlyWorker::earnings()const
{
    if(Gethours()<=40)
        return Getwage()*Gethours();
    else
        return Getwage()*40+Getwage()*1.5*(Gethours()-40);
}
void HourlyWorker::print()const
{
    cout<<GetfirstName()<<' '<<GetlastName()<<
    "\nsocial security number: "<<GetsocialSecurityNumber()
    <<"\n wage is "<<Getwage()<<" hours is : "<<Gethours()<<endl;
    cout<<"earning salary :"<<earnings()<<endl;
}


HourlyWorker::~HourlyWorker()
{
    //dtor
}
