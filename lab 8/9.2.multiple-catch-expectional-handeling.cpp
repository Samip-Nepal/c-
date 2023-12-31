
using namespace std;
#include<iostream>
int main()
{
	int dividend,divisor;
	cout<<"Enter the dividend:";
	cin>>dividend;
	cout<<"Enter the divisor:";
	cin>>divisor;
	
	try
	{
		if(divisor==0)
		throw 0.0;
		
		cout<<"The result of "<<dividend<<" divided by "<<divisor<<" is "<<dividend/divisor;
		
		if(dividend%divisor!=0)
		throw (dividend%divisor);
		
	}
	catch(double m)
	{
		cout<<"Exceptional Error! the divisor cannot be zero";
	}
	
	catch(int q)
	{
		cout<<" with reminder "<<q;
	}
	
	return 0;
}
