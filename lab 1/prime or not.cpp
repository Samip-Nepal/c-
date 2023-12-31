#include<iostream>
using namespace std;
int main()
{	
	int a,i,count=0;
	cout<<"Enter the a number:";
	cin>>a;
	for(i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			count=count+1;
		}
	}
		if(count==1)
		{
		cout<<"The number is prime";
		}
		else 
		{
			cout<<"The number is not a prime number";
		}
}


