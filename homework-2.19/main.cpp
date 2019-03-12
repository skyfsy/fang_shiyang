#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int Smallest,Largest;
    cout<<"Input three different integers : ";
    cin>>a>>b>>c;
    cout<<"sum is "<<a+b+c<<endl;
    cout<<"Average is "<<(a+b+c)/3.0<<endl;
    cout<<"Product is "<<a*b*c<<endl;
    Smallest=Largest=a;
    if(b<Smallest)
    {
        Smallest=b;
    }
    else if(b>Largest)
    {
        Largest=b;
    }
    if(c<Smallest)
    {
        Smallest=c;
    }
    else if(c>Largest)
    {
        Largest=c;
    }
    cout<<"Smallest is "<<Smallest<<endl;
    cout<<"Largest is "<<Largest<<endl;

    return 0;
}
