#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char x[20];
	ifstream a("OUT.TXT");
	while(a>>x)
	{
		cout<<x<<endl;
	}
	a.close();
}
