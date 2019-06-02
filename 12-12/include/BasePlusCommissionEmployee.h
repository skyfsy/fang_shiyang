#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H

#include <CommissionEmployee.h>

#include <iostream>


class BasePlusCommissionEmployee : public CommissionEmployee
{
    public:
        BasePlusCommissionEmployee(const std::string &first,
    const std::string &last,const std::string &ssn ,const int &,double gross,double rate,double base);
        virtual ~BasePlusCommissionEmployee();

        double GetbaseSalary()const{ return baseSalary; }
        void SetbaseSalary(const double base) ;

        virtual double earnings()const override;
        virtual void print()const override;
    protected:

    private:
        double baseSalary;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
