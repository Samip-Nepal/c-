//wap to show friend function acting bridge between two classes.
#include<iostream>
using namespace std;
class friend1;
class friend2
{
	int x;
	public:
		void getdata()
		{
			cin>>x;
			
		}friend void sum(friend1 a,friend2 b);		
};
class friend1
{
	int y;
	public:
		void getdata()
		{
			cin>>y;
			
		}friend void sum(friend1 a,friend2 b);		
};
void sum(friend1 a,friend2 b)
{
	cout<<"The output is:"<<a.y+b.x;
	
}
int main()
{
	friend1 a;
	friend2 b;
	a.getdata();
	b.getdata();
	sum(a,b);
}
