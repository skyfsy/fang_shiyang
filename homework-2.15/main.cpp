#include <iostream>

using namespace std;

int main()
{
   double number_1,number_2;
   double add=0;
   double cut=0;
   double ride=0;
   double except=0;

   cout<<"please put two number that you want to calculate :"<<endl;
   cin>>number_1>>number_2;

   add=number_1+number_2;
   cut=number_1-number_2;
   ride=number_1/number_2;
   except=number_1*number_2;

   cout<<"the add is :"<<add<<endl;
   cout<<"the ride is :"<<ride<<endl;
   cout<<endl;

   cout<<"if from left to right :"<<endl;
   cout<<"cut is :"<<cut<<endl;
   if(0==number_2)
   {
       cout<<"result of except is meaningless"<<endl;
   }
   else
   {
       cout<<"except is :"<<except<<endl;
   }
   cout<<endl;

   cout<<"if from right to left :"<<endl;
   cout<<"the cut is :"<<-cut<<endl;
   if(0==number_1)
   {
       cout<<"result of except is meaningless"<<endl;
   }
   else
   {
       cout<<"except is :"<<number_2/number_1<<endl;
   }

}
