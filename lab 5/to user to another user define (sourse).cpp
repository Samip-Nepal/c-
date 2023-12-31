#include<iostream>
using namespace std;
class centi
{
	int cm;
	public:
		void showdata()
		{
	cout<<"Show the value:"<<cm;
		}
		centi(int x)
		{
			cm=x;
		}
		centi()
		{
			
		}
};
class meter {
	int m;
	public:
		void getdata()
		{
		cout<<"Enter the value:";
		cin>>m;	
		}
		operator centi()
		{
			int centimeter;
			centimeter =m*100;
			return centi(centimeter);
		}
};
int main()
{
	meter m;
	m.getdata();
	centi cm;
	cm=m;
	cm.showdata();
}
