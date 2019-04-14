#include <iostream>

using namespace std;

double mins(double x)
{
    static int i=0;
    static double min;
    if(0==i)
    {
        min=x;

    }
    if(x<min)
    {
        min=x;
    }
    i++;


    return min;
}

int main()
{
    double number=0;
    cout<<"plaese put three number :";
    for(int i=0;i<3;i++)
    {
        cin>>number;
        mins(number);
    }
    cout<<mins(number);
}
