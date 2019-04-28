#include <iostream>
#include <windows.h>
#include <ctime>
#include <array>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(0));
    array<array<int,6>,6>date{0};
    for(int i=0;i<36000;i++)
    {
        int first=0;
        int second=0;
        first=rand()%6+1;
        second=rand()%6+1;
        date[first-1][second-1]++;
    }
    cout<<setw(6)<<"1"<<setw(5)<<"2"<<setw(5)<<"3"<<setw(5)<<"4"<<setw(5)<<"5"<<setw(5)<<"6"<<endl;
    for(auto &first:date)
    {
        static int prep=1;
        cout<<prep;
        prep++;
        for(auto &second:first)
        {
            cout<<setw(5)<<second;
        }
        cout<<endl;
    }

    return 0;
}
