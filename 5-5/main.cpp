#include <iostream>

using namespace std;

int main()
{
    int i=0,sum=0;
    int number;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        cin>>number;
        sum+=number;
    }
    cout<<"sum is : "<<sum;
    return 0;
}
