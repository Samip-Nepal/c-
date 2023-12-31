#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number between 0 to 10:";
	cin>>n;
	
	try
	{
		if(n>9)
		throw "error! number you entered is greater than 10";
		
		if(n<1)
		throw "error! number you entered is less than 0";
		cout<<"Entered number is "<<n;
	}
	
	
	catch(const char* msg)
	{
		cout<<msg<<endl;
	} 

	
	return 0;
	
}
