#include <iostream>

using namespace std;

string iseven(int number)
{
    if(number%2==0)
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main()
{
    int number=0;
    cout<<"if you want to exit the project please put others!"<<endl;
    cout<<"please put number : ";
    while(cin>>number)
    {
        cout<<iseven(number)<<endl;
        cout<<"please put number : ";
    }
    return 0;
}
