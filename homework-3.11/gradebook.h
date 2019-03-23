#include<iostream>
#include<string>

using namespace std;

class gradebook
{
public:
    explicit gradebook(string ,string );
    void setgradebook(string);
    void setteacher(string);
    string getgradebook();
    string getteacher();
    void displaymessage();
private:
    string gradebookname,teachername;
};
