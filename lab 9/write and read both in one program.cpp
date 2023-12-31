#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char d;
	ofstream a("Don.txt");
	a<<"Samip don";
	a.close();
	ifstream b ("Don.txt");
	while(b>>d)
	{
		cout<<d;
	}
	b.close();
}
