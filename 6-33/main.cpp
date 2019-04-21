#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int flip(void)
{
    int i=0;
    if(rand()%2==1)
    {
        i++;
    }

    return i;
}

int main()
{
    int head=0;
    int tail=0;
    srand(time(0));
    for(int i=0;i<100;i++)
    {

        if(flip()==0)
        {
            cout<<"Tail ";
            tail++;
        }
        else
        {
            cout<<"Head ";
            head++;
        }
    }
    cout<<endl;
    cout<<"Head : "<<head<<endl;
    cout<<"Tail : "<<tail<<endl;


    return 0;
}
