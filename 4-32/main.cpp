#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"please put the (a b c) : ";
    cin>>a>>b>>c;
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c && a-b<c)
        {
            cout<<"the (a b c) is right"<<endl;
        }
        else
        {
            cout<<"the (a b c) is error"<<endl;
        }
    }
    else
    {
        cout<<"the (a b c) is error"<<endl;
    }
    return 0;
}
