#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <Employee.h>


class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee(const std::string &first,
    const std::string &last,const std::string &ssn ,const int &,double =0.0 ,double =0.0);
        virtual ~CommissionEmployee();

        void setgrossSalary(const double gross);
        double getgrossSalary()const{return grossSalary;}

        void setCommissionRate(const double rate);
        double getCommissionRate()const{return CommissionRate;}

        virtual double earnings()const override;
        virtual void print()const override;

    protected:

    private:
        double grossSalary;
        double CommissionRate;
};

#endif // COMMISSIONEMPLOYEE_H
