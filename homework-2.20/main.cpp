#include <iostream>

using namespace std;

double PI=3.14159;

int main()
{
    double diameter,perimeter,area;
    int r;
    cout<<"please put the number :"<<endl;
    cin>>r;
    diameter=r*2;
    perimeter=2*r*PI;
    area=PI*r*r;
    cout<<"diameter= "<<diameter<<endl;
    cout<<"perimeter= "<<perimeter<<endl;
    cout<<"area= "<<area<<endl;
    return 0;
}
