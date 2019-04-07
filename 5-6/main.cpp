#include <iostream>

using namespace std;

int main()
{
    int i=0;
    double number=0,sum=0;
    for(i=0;;i++)
    {
        cin>>number;
        if(9999==number)
        {
            break;
        }
        sum+=number;
    }
    cout<<"average is : "<<sum/i*1.0<<endl;
    return 0;
}
