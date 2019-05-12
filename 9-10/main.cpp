#include <iostream>
#include <stdexcept>

using namespace std;

class Time
{
public:

    explicit Time(int h=0,int m=0,int s=0)
    {
        int i=0;
        i+=sethour(h);
        i+=setminute(m);
        i+=setsecond(s);
        if(i!=3)
            throw invalid_argument("error");
    }
    int sethour(int h)
    {
        int prep=1;
        if(0<=h && h<24)
            hour=h;
        else
            prep=0;

        return prep;
    }

    int setminute(int m)
    {
        int prep=1;
        if(0<=m && m<60)
            minute=m;
        else
            prep=0;

        return prep;
    }
    int setsecond(int s)
    {
        int prep=1;
        if(0<=s && s<60)
            second=s;
        else
            prep=0;

        return prep;
    }
private:
    int hour;
    int minute;
    int second;
};

int main()
{
    try
    {
        Time mytime(25,2,3);
    }
    catch(invalid_argument &a)
    {
        cerr<<"oh! "<<a.what()<<endl;
    }

    return 0;
}
