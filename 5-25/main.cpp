#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    for(count=1;(count<=10 && count!=5);count++)
    {
        cout<<count<<" ";
    }
    cout<<"\nbroke out of loop at count = "<<count;

    return 0;
}
