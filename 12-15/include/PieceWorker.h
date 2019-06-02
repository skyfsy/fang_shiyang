#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include "Employee.h"

class PieceWorker:public Employee
{
    public:
        PieceWorker(const std::string &,const
                 std::string &,const std::string &,double,double );
        virtual ~PieceWorker();

        double Getwage()const{return wage;};
        void Setwage(const double val) { wage = val; }
        double Getpieces()const { return pieces; }
        void Setpieces(const double val) { pieces = val; }

        virtual double earnings()const override;
        virtual void print()const override;

    protected:

    private:
        double wage;
        double pieces;
};

#endif // PIECEWORKER_H
