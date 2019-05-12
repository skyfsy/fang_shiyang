#include <iostream>
#include <ctime>

using namespace std;

class Time
{
public:
    explicit Time()
    {
        nowtime=time(0);
        settime();
        /*
        struct tm *Tptr=localtime(&nowtime);
        year=Tptr->tm_year+1900;
        month=Tptr->tm_mon+1;
        day=Tptr->tm_mday;
        hour=Tptr->tm_hour;
        minth=Tptr->tm_min;
        s=Tptr->tm_sec;
        */
    }
    void settime()
    {
        struct tm *Tptr=localtime(&nowtime);
        year=Tptr->tm_year+1900;
        month=Tptr->tm_mon+1;
        day=Tptr->tm_mday;
        hour=Tptr->tm_hour;
        minth=Tptr->tm_min;
        s=Tptr->tm_sec;
    }
    void outtime(void)
    {
        cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minth<<":"<<s<<endl;
    }
    void tick()
    {
        nowtime+=3600*24;
        settime();
    }
    void tick(char a)
    {
        nowtime+=1;
        settime();
    }
private:
    time_t nowtime;
    int year;
    int month;
    int day;
    int hour;
    int minth;
    int s;
};

int main()
{
    Time mytime;
    mytime.outtime();

    for(int i=0;i<30;i++)
    {
        mytime.tick();
    }
    mytime.outtime();

    for(int i=0;i<365;i++)
    {
        mytime.tick();
    }
    mytime.outtime();

    for(int i=0;i<60;i++)
    {
        mytime.tick('s');
    }
    mytime.outtime();

    /*
    for(int i=0;i<3600*24;i++)
    {
        mytime.tick();
    }
    mytime.outtime();
    */

    return 0;
}
