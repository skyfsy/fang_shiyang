#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"please input the number : ";
    cin>>number;
    if(0==number%2)
    {
        cout<<number<<" is ż��"<<endl;
    }
    else
    {
        cout<<number<<" is ����"<<endl;
    }
    return 0;
}
