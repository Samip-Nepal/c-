#include<iostream>
#include<fstream>
using namespace std;
class test
{
	int x, y;
	public:
		void getdata()
		{
			cout<<"Enter value of x: ";
			cin>>x;
			cout<<"Enter value of y: ";
			cin>>y;
		}
};

int main()
{
	test t;
	t.getdata();
	ofstream a;
	a.open("lab.bin");
	a.write((char *)&t,sizeof(t));
	a.close(); 
}
