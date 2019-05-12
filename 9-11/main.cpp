#include <iostream>
#include <stdexcept>

using namespace std;

class Rectangle
{
public:
    explicit Rectangle(double length=1.0,double width=1.0)
    {
        int prep=0;
        prep+=setlength(length);
        prep+=setwidth(width);
        if(prep!=2)
            throw invalid_argument("error ");
    }
    int setlength(double date)
    {
        int prep=1;
        if(0.0<date && date<20.0)
            length=date;
        else
            prep=0;

        return prep;
    }
    double getlength()
    {
        return length;
    }
    int setwidth(double date)
    {
        int prep=1;
        if(0.0<date && date<20.0)
            width=date;
        else
            prep=0;

        return prep;
    }
    double getwidth()
    {
        return width;
    }
    double perimeter()
    {
        return length*2+ width*2;
    }
    double area()
    {
        return  width*length;
    }
private:
    double length;
    double width;
};

int main()
{

    try
    {
        Rectangle myrectangle1(25,2);
    }
    catch(invalid_argument &a)
    {
        cerr<<"oh! "<<a.what()<<endl;
    }

    Rectangle myrectangle2(10.0,2.3);
    cout<<myrectangle2.getlength()<<endl;
    cout<<myrectangle2.getwidth()<<endl;
    cout<<myrectangle2.perimeter()<<endl;
    cout<<myrectangle2.area()<<endl;


    return 0;
}
