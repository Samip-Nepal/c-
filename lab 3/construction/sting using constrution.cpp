#include<iostream>
using namespace std;
class programing
{
	public:
		programing()
		{
		cout<<"I love c++"<<endl;
		}
		programing(string str)
		{
			cout<<"I love "<<str<<".";
		}
};
int main()
{
	programing a;
	string str;
	cin>>str;
	programing b(str);
}
