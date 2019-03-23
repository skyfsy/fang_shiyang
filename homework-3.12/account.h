#include<iostream>
#include<string>

using namespace std;

class account
{
    public:
        explicit account(double);
        void setaccount(double);
        void credit(double);
        void debit(double);
        double getbalance();
    private:
        double money;
};
