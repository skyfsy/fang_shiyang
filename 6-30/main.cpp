#include <iostream>

using namespace std;

long long returns(long long number)
{
    long long result=0;
    while(number)
    {
        result=result*10+number%10;
        number=number/10;
    }

    return result;
}

int main()
{
    long long number=0;
    cin>>number;
    cout<<returns(number);

    return 0;
}
