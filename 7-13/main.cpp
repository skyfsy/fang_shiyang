#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,20>number={0};
    cout<<"please put 20 number :"<<endl;
    for(int i=0;i<20;i++)
    {
        int prep=1;
        int cin_nunber;
        cin>>cin_nunber;
        if(cin_nunber<10 || cin_nunber>100)
        {
            prep=0;
        }
        else
        {
            for(int j=0;j<20;j++)
                {
                    if(number[j]==cin_nunber)
                    {
                        prep=0;
                    }
                }
        }
        if(prep==1)
        {
            number[i]=cin_nunber;
        }
    }
    for(int i=0;i<20;i++)
    {
        if(number[i]==0)
            {
                ;
            }
            else
                cout<<number[i]<<" ";

    }

    return 0;
}
