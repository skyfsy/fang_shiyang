#include<iostream>
#include<string>

using namespace std;

int i=0,total,date;

int average(void)
{
	if(i<10)
	{
	std::cout<<"date : ";
	std::cin>>date;
	total=total+date;
	i=i++;
	average();
	}
	else
	{
		return total; 
	}
}

int main()
{
	average();
	
	return 0;
}
