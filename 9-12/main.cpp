#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

class Rectangle
{
public:
    explicit Rectangle(double dates[][2])
    {
        setdate(dates);
        linedate();
        if(!fordate())
            throw invalid_argument("error ");
        setlong();
    }
    int fordate()
    {
        int i=0;
        if( (a[0][0]-a[1][0])==(a[3][0]-a[2][0]) && (a[0][1]-a[1][1])==(a[3][1]-a[2][1]))
            i=1;
        return i;
    }
    void setdate(double dates[][2])
    {
        for(int i=0;i<4;i++)
        {
            for(int r=0;r<2;r++)
            {
                a[i][r]=dates[i][r];
            }
        }
    }
    void linedate()
    {
        for(int i=0;i<3;i++)
        {
            for(int r=0;r<3-i;r++)
            {
                if(a[r][0]>a[r+1][0])
                {
                    int prep=0;
                    prep=a[r][0];
                    a[r][0]=a[r+1][0];
                    a[r+1][0]=prep;
                    prep=a[r][1];
                    a[r][1]=a[r+1][1];
                    a[r+1][1]=prep;
                }
            }
        }
        if(a[0][1]<a[1][1])
        {
            int prep=0;
            prep=a[0][0];
            a[0][0]=a[1][0];
            a[1][0]=prep;
            prep=a[0][1];
            a[0][1]=a[1][1];
            a[1][1]=prep;
        }
        if(a[3][1]<a[2][1])
        {
            int prep=0;
            prep=a[2][0];
            a[2][0]=a[3][0];
            a[3][0]=prep;
            prep=a[2][1];
            a[2][1]=a[3][1];
            a[3][1]=prep;
        }
    }
    void setlong()
    {
        double x,y;
        x=sqrt( (a[0][0]-a[1][0])*(a[0][0]-a[1][0])+(a[0][1]-a[1][1])*(a[0][1]-a[1][1]) );
        y=sqrt( (a[2][0]-a[3][0])*(a[2][0]-a[3][0])+(a[2][1]-a[3][1])*(a[2][1]-a[3][1]) );
        cout<<x<<" "<<y<<endl;
        if(x>y)
        {
            length=x;
            width=y;
            //cout<<length<<" "<<width<<endl;
        }
        else
        {
            length=y;
            width=x;
        }
    }
    double getlength()
    {
        return length;
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
    double a[4][2];
    double length;
    double width;
};

int main()
{
    double a[4][2]={2,1,3,1,2,2,3,2};
    /*
    try
    {
        Rectangle myrectangle1(a);
    }
    catch(invalid_argument &a)
    {
        cerr<<"oh! "<<a.what()<<endl;
    }
*/
    Rectangle myrectangle1(a);
    cout<<myrectangle1.getlength()<<endl;
    cout<<myrectangle1.getwidth()<<endl;
    cout<<myrectangle1.perimeter()<<endl;
    cout<<myrectangle1.area()<<endl;


    return 0;
}
