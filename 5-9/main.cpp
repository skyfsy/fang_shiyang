#include <iostream>

using namespace std;

int main()
{
    long long int add=1;
    for(int i=0;i<=15;i++)
    {
        if(1==i%2)
        {
            cout<<i<<endl;
            add*=i;
        }
    }
    cout<<"add is : "<<add<<endl;
    return 0;
}
