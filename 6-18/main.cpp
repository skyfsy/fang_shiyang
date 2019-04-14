#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{
    int result=1;
    for(int i=0;i<exponent;i++)
    {
        result*=base;
    }

    return result;
}

int main()
{
    int base,exponent;
    cout<<"please put the base and exponent : ";
    cin>>base>>exponent;
    cout<<"the result is : "<<integerPower(base,exponent)<<endl;

    return 0;
}
