#include <iostream>

using namespace std;

int nn(int n)
{
    int result=1;
    if(n>=0)
    {
        for(int i=1;i<=n;i++)
        {
            result*=i;
        }
    }
    else
    {
        cout<<"invalid date ! "<<endl;
    }

    return result;
}


int main()
{
    double e=0;
    int n=0;
    cout<<"please put the accuracy of e : ";
    cin>>n;
    int x=0;
    cout<<"please put the x of e^x : ";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        int add=1;
        for(int j=0;j<i;j++)
        {
            add*=x;
        }
        e+=add*1.0/nn(i);
    }
    cout<<"result is : "<<e;

    return 0;
}
