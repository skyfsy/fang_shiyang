#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"please put the (a b c) : ";
    cin>>a>>b>>c;
    int tf=0;//½øÐÐ¶Ô´í´¢´æ
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c && a-b<c)
        {
            if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            {
                tf=1;
            }
        }
    }
    if(tf==1)
    {
        cout<<"the (a b c) is right"<<endl;
    }
    else
    {
        cout<<"the (a b c) is error"<<endl;
    }
    return 0;
}
