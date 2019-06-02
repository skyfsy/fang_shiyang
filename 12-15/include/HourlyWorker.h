#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include <Employee.h>


class HourlyWorker : public Employee
{
    public:
        HourlyWorker(const std::string &,const
                 std::string &,const std::string &,double ,double );
        virtual ~HourlyWorker();

        double Getwage()const { return wage; }
        void Setwage(const double val) { wage = val; }
        double Gethours()const { return hours; }
        void Sethours(const double val) { hours = val; }

        virtual double earnings()const override;
        virtual void print()const override;

    protected:

    private:
        double wage;
        double hours;
};

#endif // HOURLYWORKER_H
