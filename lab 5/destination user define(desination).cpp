#include<iostream>
using namespace std;
class centimeter  
{
	int cm;
	public:
		void getdata()
		{
	cout<<"Enter the value:";
	cin>>cm;
		}
		int getdata()
		{
		
			return cm;
	}
		centimeter()
		{
		cm=0;	
		}
};
class meter {
	int m;
	public:
		meter()
		{
		m=0;	
		}
		void showdata()
		{
		cout<<" The value is:";
		cout<<cm;	
		}
		meter (centimeter x)
		{
			m=x.getdata();
		}
		
};
int main()
{
	centimeter m;
	meter m;
	cm.getdata();
	cm=m;
	m.showdata();
}
