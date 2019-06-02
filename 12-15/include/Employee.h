#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
    public:
        Employee(const std::string &,const
                 std::string &,const std::string &);
        virtual ~Employee();

        std::string GetfirstName()const{return firstName;};
        void SetfirstName(const std::string &first){firstName=first;};
        std::string GetlastName()const{return lastName;};
        void SetlastName(const std::string &last){lastName=last;};
        std::string GetsocialSecurityNumber()const{return socialSecurityNumber;};
        void SetsocialSecurityNumber(const std::string &ssn){socialSecurityNumber=ssn;};

        virtual double earnings()const=0;
        virtual void print()const;

    protected:

    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
};

#endif // EMPLOYEE_H
