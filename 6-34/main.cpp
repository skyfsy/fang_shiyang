#include <iostream>
#include <windows.h>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
    cout<<"I have a number between 1 and 1000."<<endl;
    cout<<"Can you guess my number?"<<endl;
    cout<<"Please type your first guess."<<endl;
     int number=0;
        srand(time(0));
        number=rand()%1000+1;
    while(1)
    {
        char prep;
        int i=0;
       cin>>i;
       if(number==i)
       {
           cout<<"Excellent You guessed the number!"<<endl;
           cout<<"Would you like to play again (y or n)?";
           cin>>prep;
           if(prep=='n')
            break;
            else
            {
                number=rand()%1000+1;
                system("cls");
                cout<<"I have a number between 1 and 1000."<<endl;
                cout<<"Can you guess my number?"<<endl;
                cout<<"Please type your first guess."<<endl;
            }
       }
       else if(i>number)
       {
           cout<<"Too high. Try again."<<endl;
       }
       else
       {
           cout<<"Too low. Try again."<<endl;
       }
    }

    return 0;
}
