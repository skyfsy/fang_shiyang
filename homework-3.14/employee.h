#include<iostream>
#include<string>

using namespace std;

class employee
{
public:
    explicit employee(string,string,double);
    void setfirst(string);
    void setlast(string);
    void setmoney(double);
    string getfirst();
    string getlast();
    double getmoney();
    double up();
    void dissplaymessage();
private:
    string first,last;
    double money;
};
