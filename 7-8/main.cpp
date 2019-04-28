#include <iostream>
#include <array>
#include <string.h>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
    array<int,6>alphabet={0};
    cout<<"a:"<<endl;
    cout<<alphabet[5]<<endl;;
    array<double,4>grades={0};
    grades[3]=1;
    cout<<"b:"<<endl;
    cout<<grades[3]<<endl;
    array<int,5>values;
    for(size_t i=0;i<values.size();i++)
    {
        values[i]=8;
    }
    cout<<"c:"<<endl;
    for(size_t i=0;i<values.size();i++)
    {
        cout<<values[i]<<" ";

    }
    cout<<endl;
    array<float,100>temperatures={0};
    for(size_t i=1;i<temperatures.size();i++)
    {
        temperatures[0]+=temperatures[i];
    }
    cout<<"d:"<<endl;
    cout<<temperatures[0]<<endl;
    array<double,11>a;
    array<double,34>b;
    for(size_t i=0;i<a.size();i++)
    {
        a[i]=1;
    }
    for(size_t i=0;i<b.size();i++)
    {
        b[i]=2;
    }
    for(size_t i=0;i<a.size();i++)
    {
        b[i]=a[i];
    }
    cout<<"e:"<<endl;
    for(size_t i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    array<double,99>w;

    for(int i=0;i<98;i++)
    {
        for(int j=0;j<98-i;j++)
        {
            if(w[j]>w[j+1])
            {
                double prep=w[j];
                w[j]=w[j+1];
                w[j+1]=prep;
            }
        }
    }
    cout<<"f:"<<endl;
    for(size_t i=0;i<w.size();i++)
    {
        cout<<w[i]<<" ";
    }
    cout<<endl;
    cout<<"max is :"<<a[0]<<"    min is :"<<a[98]<<endl;


    return 0;
}
