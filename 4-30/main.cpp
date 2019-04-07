#include <iostream>

#define PI 3.14159

using namespace std;

int main()
{
    double r,R,C,S;
    cout<<"please put the r of circle : ";
    cin>>r;
    R=r*2;
    C=2*PI*r;
    S=PI*r*r;
    cout<<" R is : "<<R<<endl;
    cout<<" C is : "<<C<<endl;
    cout<<" S is : "<<S<<endl;
    return 0;
}
