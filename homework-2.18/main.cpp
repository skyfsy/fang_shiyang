#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"please put two number :";
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is larger"<<endl;
    }
    else if(a<b)
    {
        cout<<b<<" is larger"<<endl;
    }
    else
    {
        cout<<"These numbers are equal."<<endl;
    }

    return 0;
}
