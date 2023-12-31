#include<iostream>
using namespace std;
int main()
{
	int dividen,divisior;
	cout<<"Enter the dividen:";
	cin>>dividen;
	cout<<"Enter the divisior:";
	cin>>divisior;
	
	try
	{
		if(divisior==0)
		throw 0;
		
		cout<<"The result of "<<dividen<<" divided by "<<divisior<<" is "<<dividen/divisior;
	}
	catch(int m)
	{
		cout<<"Exceptional Error! the divisior cannot be zero";
	}
	
	return 0;
}
