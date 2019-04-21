#include <iostream>

using namespace std;

inline double circleArea(double &number)
{
    return 3.14159*number*number;
}

int main()
{
    double number=0;
    cout<<"please put the 'r' of circle"<<endl;
    cin>>number;
    cout<<"area is :"<<circleArea(number)<<endl;


    return 0;
}
