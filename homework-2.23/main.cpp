#include <iostream>

using namespace std;

int main()
{
    int max,min;
    int number;
    cout<<"please input five number : ";
    cin>>number;
    max=min=number;
    for(int i=0;i<4;i++)
    {
        cin>>number;
        if(number>max)
        {
            max=number;
        }
        if(number<min)
        {
            min=number;
        }
    }
    cout<<"max is : "<<max<<endl;
    cout<<"min is : "<<min<<endl;

    return 0;
}
