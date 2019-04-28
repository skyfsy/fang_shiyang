#include <iostream>
#include <array>
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{
    array<array<int,3>,2>t;
    cout<<t.size()<<"��"<<endl;
    cout<<t[0].size()<<"��"<<endl;
    cout<<t.size()*t[0].size()<<"Ԫ��"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"t["<<i<<"]["<<j<<"]"<<" ";
        }
        cout<<endl;
    }
    t[0][1]=0;

    cout<<"��1�У�"<<endl;
    for(size_t i=0;i<t[0].size();i++)
    {
        cout<<t[0][i]<<" ";
    }
    cout<<endl;
    cout<<"��2�У�"<<endl;
     for(size_t i=0;i<t[0].size();i++)
    {
        cout<<t[1][i]<<" ";
    }
    cout<<endl;

    memset(&t[0], 0x0, 3*sizeof(int));
    memset(&t[1], 0x0, 3*sizeof(int));

    cout<<"��1�У�"<<endl;
    for(size_t i=0;i<t[0].size();i++)
    {
        cout<<t[0][i]<<" ";
    }
    cout<<endl;

    cout<<"��2�У�"<<endl;
    for(auto &out:t[1])
    {
        cout<<out<<" ";
    }
    cout<<endl;
    //i,jʡ��
    cout<<"please put number of array : "<<endl;
    for(size_t i=0;i<t.size();i++)
    {
        for(size_t j=0;j<t[0].size();j++)
        {
            cin>>t[i][j];
        }
    }
    int min=t[0][0];
    for(auto &first:t)
    {
        for(auto &secend:first)
        {
            if(secend<min)
            {
                min=secend;
            }
        }
    }
    cout<<"min :"<<min<<endl;
    cout<<"��1��:";
    for(auto &out:t[0])
        cout<<out<<" ";
    cout<<endl;
    int result=0;
    for(auto &first:t)
    {
        for(auto &second:first)
        {
            result+=second;
        }
    }
    cout<<"add :"<<result<<endl;
    cout<<setw(2)<<"\\"<<setw(10)<<"0"<<setw(10)<<"1"<<setw(10)<<"2"<<endl;

    for(auto &first:t)
    {
        static int i=0;
        cout<<setw(2)<<i++;
        for(auto &second:first)
        {
            cout<<setw(10)<<second;
        }
        cout<<endl;
    }

    return 0;
}
