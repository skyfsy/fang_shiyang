#include <iostream>
#include <array>

using namespace std;

int main()
{
    cout<<"a) "<<endl;
    array<int,10>counts={0};
    for(auto &out:counts)
    {
        cout<<out<<" ";
    }
    cout<<endl;

    cout<<"b) "<<endl;
    array<int,15>bouns={0};
    for(auto &out:bouns)
    {
        cout<<out<<" ";
    }
    for(auto &out:bouns)
    {
        out++;
    }
    cout<<endl;
    for(auto &out:bouns)
    {
        cout<<out<<" ";
    }
    cout<<endl;
    cout<<"c) "<<endl;
    array<double,12>mT={0};
    for(auto &out:mT)
    {
        cin>>out;
    }
    for(auto &out:mT)
    {
        cout<<out<<" ";
    }
    cout<<endl;
    cout<<"d) "<<endl;
    array<int,5>bestScores;
    for(auto &out:bestScores)
    {
        cout<<out<<endl;
    }
    cout<<endl;

    return 0;
}
