#include <iostream>

using namespace std;

int main()
{
    int j=0;
    int min=0;
    int number=0;
    cout<<"please put how many number you want to input : ";
    cin>>j;
    cout<<"please put the number you want to input : ";
    cin>>min;
    for(int i=0;i<j-1;i++)
    {
        cin>>number;
        if(number<min)
        {
            min=number;
        }
    }
    cout<<"min is : "<<min<<endl;

    return 0;
}
