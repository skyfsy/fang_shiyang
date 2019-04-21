#include <iostream>

using namespace std;

int scard(int number)
{
    int i=0;
    if(number>=0 && number<=100)
    {

        if(number>=90)
        {
           i++;
        }
        if(number>=80)
        {
            i++;
        }
        if(number>=70)
        {
            i++;
        }
        if(number>=60)
        {
            i++;
        }
        if(number<60)
        {
            i=0;
        }
    }
    else
    {
        cout<<"error !!!!!";
    }

    return i;
}


int main()
{
    int number=0;
    cout<<"please put number :";
    while(cin>>number)
    {
        cout<<scard(number)<<endl;
    }
    cout<<"Exit Program";


    return 0;
}
