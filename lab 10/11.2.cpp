#include<iostream>
#include<fstream>
using namespace std;
class test
{
	int x, y;
	public:
		void showdata()
		{
			cout<<"value of x is "<<x<<endl;
			cout<<"value of y is "<<y;
		}
};

int main()
{
	test t;
	ifstream a;
	a.open("lab.bin");
	a.read((char *)&t,sizeof(t));
	t.showdata();
	a.close(); 
}
