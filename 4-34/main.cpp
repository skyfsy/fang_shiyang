#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cout<<"please put you number yor want to learn : ";
    cin>>n;
    int result=1;
    if(n>=0)
    {
        for(int i=1;i<=n;i++)
        {
            result*=i;
        }
        cout<<"result is : "<<result<<endl;
    }
    else
    {
        cout<<"invalid date ! "<<endl;
    }

    return 0;
}
