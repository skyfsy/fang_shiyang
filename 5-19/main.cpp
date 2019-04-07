#include <iostream>

using namespace std;

int main()
{
    double pi=0;
    for(int i=1;i<1000;i++)
    {
        if(i%2==1)
        pi=pi+(4.0/(i*2-1));
        else
        pi=pi-(4.0/(i*2-1));
        cout<<"PI is : " <<pi<<endl;
    }
    return 0;
}
