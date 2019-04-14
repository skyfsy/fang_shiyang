#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int zhi(int number)
{
    int prep=1;
    for(int i=2;i<sqrt(number);i++)
    {
        if(number%i==0)
        {
            prep=0;
        }
    }

    return prep;
}



int main()
{
    for(int i=2;i<=10000;i++)
    {
        if(zhi(i)==1)
        {
            cout<<setw(5)<<i;
        }
    }

}
