#include <iostream>
#include<string>
#include"account.h"

using namespace std;

int main()
{
    double zero,in,out;
    int n;
    cout<<"please input your balance : ";
    cin>>zero;
    account myaccount(zero);
    cout<<"********************************************"<<endl;
    cout<<"please select your action :"<<"\n"<<"if you want to credit please input 1"<<endl;
    cout<<"if you want to debit please input 2"<<endl;
    cout<<"if you want to ending the project please input any thing except of number "<<endl;
    cout<<"********************************************"<<endl;
    cout<<"please input your first action : ";
    while(cin>>n)
    {
        switch(n)
        {
            case 1 : cout<<"please input your credit : ";
            cin>>in;
            myaccount.credit(in);
            cout<<"your balance is "<<myaccount.getbalance()<<endl;
            break;

            case 2 : cout<<"please input your debit : ";
            cin>>out;
            myaccount.debit(out);
            cout<<"your balance is "<<myaccount.getbalance()<<endl;
            break;

            default:
                cout<<"please put valid select !"<<endl;
        }
        cout<<"********************************************"<<endl;
        cout<<"please input your next action : ";
    }
    cout<<"thanks for your used ^v^ "<<endl;
    cout<<"********************************************"<<endl;

    return 0;
}
