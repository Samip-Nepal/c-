#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream a ("OUT.TXT");
	while(!a)
	{
		cout<<"Error";
	}
	a<<"Time is a great teacher but nowdays it is said as time is money";
	a.close();
}
