#include<iostream>
using namespace std;
class rectangle
{
	int length;
	int breadth;
	void area(int x,int y)
	{
		cout<<"The area is:"<<x*y<<endl;
	}
	public:
		rectangle()
		{
		
		 length=0;
		breadth=0;
		area(length ,breadth);
	}
			rectangle(int x)
		{
		
		 length=x;
		breadth=x;
		area(length ,breadth);
	}
			rectangle(int x ,int y)
		{
		
		 length=x;
		breadth=y;
		area(length ,breadth);
	}
};
int main()
{
	rectangle a;
	rectangle b(5);
	rectangle c(5,6);
}
