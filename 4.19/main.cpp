#include <iostream>

using namespace std;

int main()
{
    int number,largest1,largest2;
    cin>>number;
    largest1=largest2=number;
    cin>>number;
    if(number>largest1)
    {
        largest1=number;
    }
    if(number<largest1)
    {
        largest2=number;
    }
    for(int counter=0;counter<8;counter++)
    {
        cin>>number;
        if(number>largest1)
        {
            if(largest1>largest2)
            {
                largest2=largest1;
            }
            largest1=number;

        }
        else if(number>largest2)
        {
            number=largest2;
        }
    }
    cout<<"NO.1 is : "<<largest1<<endl;
    cout<<"NO.2 is : "<<largest2<<endl;
    return 0;
}
