#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==1||n==0)
	{	
	return n;
}
	else 
	{
	return (fib(n-1)+fib(n-2));
}
}
int main()
{
	int n,i=0;
	cout<<"Enter the number of series:";
	cin>>n;
while(i<n)
	{
		cout<<" "<<fib(i);
		i++;
	}
	return 0;
} 
