#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a 5 digit number:";
	cin>>str;
	
	try
	{
		if(str.size()!=5)
		throw 0;
		cout<<endl<<"Your entered number is "<<str;
		
	}
	catch(...)
	{
		cout<<endl<<"error! the number you entered is not a 5 digit number";
	}
	
	return 0;
}
