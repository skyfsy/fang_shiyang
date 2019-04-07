#include <iostream>

using namespace std;

int main()
{
    int counter,number,largest;
    cin>>number;
    largest=number;
    for(counter=0;counter<9;counter++)
    {
        cin>>number;
        if(number>largest)
        {
            largest=number;
        }
    }
    cout<<"largest is : "<<largest<<endl;
    return 0;
}
