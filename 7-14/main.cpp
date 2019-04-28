#include <iostream>
#include <vector>
#include <windows.h>


using namespace std;

int main()
{
    static int k=0;
    vector<int>number(1);
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

            for(int j=0;j<k;j++)
                {
                    if(number[j]==cin_nunber)
                    {
                        prep=0;
                    }
                }
        }
        if(prep==1)
        {
            number[k]=cin_nunber;
            //cout<<number[k];6
            k++;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout<<number[i]<<" ";
    }
    Sleep(1000);

    return 0;
}
