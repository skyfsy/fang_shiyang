#include <iostream>
#include"employee.h"

using namespace std;

int main()
{
    employee employee1("ha","haha",500000);
    employee employee2("ha","ha",10);
    employee1.dissplaymessage();
    employee2.dissplaymessage();
    employee1.up();
    employee1.dissplaymessage();
    employee2.up();
    employee2.dissplaymessage();

    return 0;
}
