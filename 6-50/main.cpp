#include <iostream>

using namespace std;

double tripleByValue(double number)
{
    return 3*number;
}
void tripleByReference(double &number)
{
    number=number*3;
}

int main()
{
    double accout=10.1;
    cout<<tripleByValue(accout)<<endl;
    tripleByReference(accout);
    cout<<accout;

    return 0;
}
