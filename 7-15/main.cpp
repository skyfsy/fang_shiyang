#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<array<int,5>,3>sales;
    for(size_t row=0;row<sales.size();++row)
    {
        for(size_t column=0;column<sales[row].size();++column)
        {
            cout<<"sales["<<row<<"]["<<column<<"]����ʼ��"<<" ";
            sales[row][column]=0;
        }
        cout<<endl;
    }


    return 0;
}
