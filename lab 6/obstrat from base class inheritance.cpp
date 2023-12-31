#include<iostream>
using namespace std;
class shape
{
	protected:
		float x;
		public:
			void get()
			{
				cin>>x;
			}
			virtual float area()=0;
};
class square:public shape
{
		public:
			float area()
			{
				return x*x;
			}
};
class circle:public shape 
{
	public:
		
			float area()
			{
			return 3.14*x*x;	
			}		
};

int main()
{
	square a;
	circle b;
	cout<<"Enter the length"<<a.get();
	cout<<" The area of square:"<<a.area();
		cout<<"Enter the radius of circle"<<b.get()<<endl;
	cout<<"Area of circle:"<<b.area()<<endl;
	return 0;
}
