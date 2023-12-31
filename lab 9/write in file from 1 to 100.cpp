//wap to write 1 to 100 in a data file FIRST.TXT
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream a ("FIRST.TXT");
	while(!a)
	{
		cout<<"Error";
	}
	for(int i=1;i<=100;i++)
	{
		a<<i;
	}
	a.close();
}

