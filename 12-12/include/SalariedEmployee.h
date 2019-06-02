#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <Employee.h>


class SalariedEmployee : public Employee
{
    public:
        SalariedEmployee(const std::string &,const std::string &,const std::string &,const int &,double =0.0);
        virtual ~SalariedEmployee();

        double GetweeklySalary()const { return weeklySalary; }
        void SetweeklySalary(const double salary);

        virtual double earnings()const override;
        virtual void print()const override;

    protected:

    private:
        double weeklySalary;
};

#endif // SALARIEDEMPLOYEE_H
