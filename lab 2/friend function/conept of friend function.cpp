//wap to show the concept of friend funtion 
#include<iostream>
using namespace std;
class funfriend
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"Enter the value of x:";
			cin>>x;
			cout<<"Enter the value of y:";
			cin>>y;
		}
		void show()
		{
			cout<<x<<endl<<y<<endl;
		}
		friend void odd(funfriend a);
};
void odd (funfriend a)
{
	cout<<a.x+a.y;
}
int main()
{
	funfriend a;
	a.getdata();
	a.show();
	odd(a);
}

