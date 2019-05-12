#include <iostream>

using namespace std;

class Rational
{
public:
    explicit Rational(int x=1,int y=1)
    {
        simple(x,y);
    }
    void out(void)
    {
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void floatout(void)
    {
        cout<<(float)numerator/denominator<<endl;
    }
    void add(Rational *ptr1,Rational *ptr2)
    {
        this->numerator=ptr1->numerator+ptr2->numerator;
        this->denominator=ptr1->denominator+ptr2->denominator;
        simple(this->numerator,this->denominator);
    }
    void deletes(Rational *ptr1,Rational *ptr2)
    {
        this->numerator=ptr1->numerator-ptr2->numerator;
        this->denominator=ptr1->denominator-ptr2->denominator;
        simple(this->numerator,this->denominator);
    }
    void ride(Rational *ptr1,Rational *ptr2)
    {
        this->numerator=ptr1->numerator*ptr2->numerator;
        this->denominator=ptr1->denominator*ptr2->denominator;
        simple(this->numerator,this->denominator);
    }
    void except(Rational *ptr1,Rational *ptr2)
    {
        this->numerator=ptr1->numerator*ptr2->denominator;
        this->denominator=ptr1->denominator*ptr2->numerator;
        simple(this->numerator,this->denominator);
    }
private:
    void simple(int x,int y)
    {
        int i=2;
        while(1)
        {

            if(x%i==0 && y%i==0)
            {
                x=x/i;
                y=y/i;
                i=2;
            }
            if(i==x || i==y)
            {
                break;
            }
            i++;
        }
        numerator=x;
        denominator=y;
    }

    int numerator;//·Ö×Ó
    int denominator;//·ÖÄ¸
};

int main()
{
    Rational myRational1(4,2);
    Rational myRational2(125,25);
    myRational1.add(&myRational1,&myRational2);
    myRational1.out();
    myRational2.out();
    myRational1.floatout();
    cout<<endl;
    myRational1.deletes(&myRational1,&myRational2);
    myRational1.out();
    myRational2.out();
    cout<<endl;
    myRational1.ride(&myRational1,&myRational2);
    myRational1.out();
    myRational2.out();
    cout<<endl;
    myRational1.except(&myRational1,&myRational2);
    myRational1.out();
    myRational2.out();
    cout<<endl;
    myRational1.floatout();

    return 0;
}
