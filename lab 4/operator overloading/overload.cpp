#include<iostream>
using namespace std;
class dist
{
	int distance;
	
	public:
		dist()
		{
			distance=0;
		}
		
		int getdata()
		{
			cout<<endl<<"Distance=";
			cin>>distance;
		}
		
		dist operator <=(dist a)
		{
			if(distance<=a.distance)
			{
			distance=a.distance;
			}
			return *this;	
		} 
		
		void showdata()
		{
			cout<<endl<<"The largest distance is "<<distance;
		}
};

int main()
{
	dist a,b,c;
	cout<<"Enter the first distance:";
	a.getdata();
	cout<<endl<<"Enter the second distance:";
	b.getdata();
	c=a<=b;
	c.showdata();
	
	return 0;
	
}
