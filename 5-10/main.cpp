#include <iostream>

using namespace std;

int main()
{

    for(int i=1;i<=5;i++)
    {
        int n=1;
        for(int j=1;j<=i;j++)
        {
            n*=j;
        }
        cout<<i<<"�Ľ׳��� : "<<n<<endl;
    }
    return 0;
}
