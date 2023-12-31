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
class samip1:public samip
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
int main()
{
	samip1 don;
	don .samip::show();
}
