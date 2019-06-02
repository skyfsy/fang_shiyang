#include "PieceWorker.h"
#include <iostream>

using namespace std;

PieceWorker::PieceWorker(const std::string &first,const
                 std::string &last,const std::string &ssn,double wa,double piece)
                 :Employee(first,last,ssn)
{
    Setwage(wa);
    Setpieces(piece);
}

double PieceWorker::earnings()const
{
    return Getwage()*Getpieces();
}
void PieceWorker::print()const
{
    cout<<GetfirstName()<<' '<<GetlastName()<<
    "\nsocial security number: "<<GetsocialSecurityNumber()
    <<"\n wage is "<<Getwage()<<" pieces is : "<<Getpieces()<<endl;
    cout<<"earning salary :"<<earnings()<<endl;
}

PieceWorker::~PieceWorker()
{
    //dtor
}
