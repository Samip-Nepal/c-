#include<iostream>
using namespace std;
void factorial(int);
int main()
{
	int a;
	cout<<"Enter any number to test Factorial:";
	cin>>a;
	factorial(a);
	
}
void factorial(int a)
{
	int f=1,m1;
	m1=a;
	if(a==0)
		cout<<"Factorial of 0 is always 1."<<endl;
	
	else 
	{
	
		while(a>0)
		{
			f=f*a;
			a--;
		}
	}
		cout<<"The factorial is:"<<f;
	
}


