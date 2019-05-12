#include <iostream>

using namespace std;

class complex
{
public:
    explicit complex(int x=1,int y=1)
    {
        realPart=x;
        imaginaryPart=y;

    }
    void out(void)
    {
        cout<<"("<<realPart<<","<<imaginaryPart<<")"<<endl;
    }
    void add(complex *ptr1,complex *ptr2)
    {
        double realPart;
        double imaginaryPart;
        realPart=ptr1->realPart+ptr2->realPart;
        imaginaryPart=ptr1->imaginaryPart+ptr2->imaginaryPart;
        cout<<"result is :";
        cout<<"("<<realPart<<","<<imaginaryPart<<")"<<endl;
    }
    void deletes(complex *ptr1,complex *ptr2)
    {
        double realPart;
        double imaginaryPart;
        realPart=ptr1->realPart-ptr2->realPart;
        imaginaryPart=ptr1->imaginaryPart-ptr2->imaginaryPart;
        cout<<"result is :";
        cout<<"("<<realPart<<","<<imaginaryPart<<")"<<endl;
    }
private:
    double realPart;
    double imaginaryPart;
};

int main()
{
    complex a{1,2};
    complex b{3,4};
    a.add(&a,&b);
    a.deletes(&a,&b);

    return 0;
}
