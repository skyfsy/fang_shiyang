#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double hypotenuse(double a,double b)
{
    double result=0;
    result=sqrt(a*a+b*b);

    return result;
}

int main()
{
    cout<<setw(6)<<"Èý½ÇÐÎ"<<setw(10)<<"±ß1"<<setw(10)<<"±ß2"<<setw(10)<<"Ö±½Ç±ß"<<setw(10)<<endl;
    cout<<setw(6)<<"1"<<setw(10)<<"3.0"<<setw(10)<<"4.0"<<setw(10)<<hypotenuse(3.0,4.0)<<setw(10)<<endl;
    cout<<setw(6)<<"2"<<setw(10)<<"5.0"<<setw(10)<<"12.0"<<setw(10)<<hypotenuse(5.0,12.0)<<setw(10)<<endl;
    cout<<setw(6)<<"3"<<setw(10)<<"8.0"<<setw(10)<<"15.0"<<setw(10)<<hypotenuse(8.0,15.0)<<setw(10)<<endl;

    return 0;
}
