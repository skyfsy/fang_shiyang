#include <iostream>
#include <vector>
#include "HourlyWorker.h"
#include "PieceWorker.h"

using namespace std;

int main()
{
    HourlyWorker myHourlyWorker("John", "Smith", "111-11-1111",20,50);
    PieceWorker myPieceWorker("Sue", "Jones", "333-33-3333",10.5,200);
    vector<Employee*>a(2);
    a[0]=&myHourlyWorker;
    a[1]=&myPieceWorker;

    a[0]->print();
    a[0]->earnings();
    a[1]->print();
    a[1]->earnings();
}
