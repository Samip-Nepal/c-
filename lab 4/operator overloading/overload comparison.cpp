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
		
		dist operator <=(dist x)
		{
			if(distance<=x.distance)
			{
			distance=x.distance;
			}
			return *this;	
		} 
		
		void showdata()
		{
			cout<<endl<<"The largest distance is: "<<distance;
		}
};

int main()
{
	dist num1,num2,num3;
	cout<<"Enter the first distance:";
	num1.getdata();
	cout<<endl<<"Enter the second distance:";
	num2.getdata();
	num3=num1<=num2;
	num3.showdata();
	
	return 0;
	
}
