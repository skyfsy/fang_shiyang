#include"gradebook.h"

gradebook::gradebook(string name1,string name2)
{
    setgradebook(name1);
    setteacher(name2);
}
void gradebook::setgradebook(string name1)
{
    gradebookname=name1;
}
void gradebook::setteacher(string name2)
{
    teachername=name2;
}
string gradebook::getgradebook()
{
    return gradebookname;
}
string gradebook::getteacher()
{
    return teachername;
}
void gradebook::displaymessage()
{
    cout<<"Welcome to"<<getgradebook()<<endl;
    cout<<"This course is presented by : "<<getteacher()<<endl;
}
