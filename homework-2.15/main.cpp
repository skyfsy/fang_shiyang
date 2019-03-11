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
   ride=number_1*number_2;
   except=number_1*number_2;

   cout<<"add= "<<add<<endl;
   cout<<"ride= "<<ride<<endl;
   cout<<endl;

   cout<<"if from left to right :"<<endl;
   cout<<"cut= "<<cut<<endl;
   if(0==number_2)
   {
       cout<<"^v^! ^v^! result of except is meaningless"<<endl;
   }
   else
   {
       cout<<"except= "<<except<<endl;
   }
   cout<<endl;

   cout<<"if from right to left :"<<endl;
   cout<<"cut= "<<-cut<<endl;
   if(0==number_1)
   {
       cout<<"^v^! ^v^! result of except is meaningless"<<endl;
   }
   else
   {
       cout<<"except= "<<number_2/number_1<<endl;
   }

}
