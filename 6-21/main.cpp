#include <iostream>

using namespace std;

string multiple(int number1,int number2)
{
    if(number2%number1==0)
    {
        return "ture";
    }
    else
    {

        return "false";
    }
}

int main()
{
    int number1,number2;
    cout<<"please put two number that you want to compare :";
    cin>>number1>>number2;

    cout<<multiple(number1,number2);
    return 0;
}
