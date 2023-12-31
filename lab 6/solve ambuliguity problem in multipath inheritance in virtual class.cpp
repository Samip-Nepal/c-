#include<iostream>
using namespace std;
class samip 
{
	protected:
		int x;
		public:
			samip()
			{
				x=10;
			}
			void show()
			{
			cout<<x;	
			}
};
class samip1 
{
	protected:
		int y;
		public:
			samip1()
			{
				y=20;
			}
			void show()
			{
			cout<<y;	
			}
};
class samip2:public samip,samip1
{
};
int main()
{
	samip2 don;
	don.samip::show();
}

