#include <iostream>
#include <iomanip>

using namespace std;

int celsius(int f)
{
    double c=0;
    c=(f-32)/1.8;

    return c;
}
int fahrenheit(int c)
{
    double f=0;
    f=c*1.8+32;

    return f;
}
int main()
{
    cout<<setw(3)<<"摄氏度"<< setw(12)<<"华氏度"<<endl;
    for(int i=0;i<=100;i++)
    {
        cout<<setw(3)<<i<<"℃"<<setw(10)<<celsius(i)<<"οF"<<endl;
    }
    cout<<setw(3)<<"华氏度"<< setw(12)<<"华氏度"<<endl;
    for(int i=32;i<=312;i++)
    {
        cout<<setw(3)<<i<<"οF"<<setw(10)<<fahrenheit(i)<<"℃"<<endl;
    }

    return 0;
}
