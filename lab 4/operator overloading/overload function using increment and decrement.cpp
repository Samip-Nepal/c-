#include<iostream>
using namespace std;
class test
{
	int x;
	public:
		void getdata()
		{
			cout<<"Enter the  value:";
			cin>>x;
		}
		
		void showdata()
		{
			cout<<"The value after increment and decrement  is :"<<x<<endl;
		}
		void operator ++()
		{
			x++;
		}
			void operator --()
		{
			x--;
		}
};
int main()
{
	system("cls");
	test a,b;
	a.getdata();
	b.getdata();
	++a;
	a.showdata();
	--b;
	b.showdata();
}
