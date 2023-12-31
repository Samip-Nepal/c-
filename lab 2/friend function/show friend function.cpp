//wap to show friend function
#include<iostream>
using namespace std;
class friend1
{
	int x,y;
	public:
	friend class friend2;	
};
 class friend2
 {
 	public:
 		void getdata(friend1 a)
 		{
 			cout<<"Enter the first value:";
 			cin>>a.x;
 			cout<<"Enter the second value:";
 			cin>>a.y;
 			cout<<"The final value is:"<<a.x+a.y; 			
		 }
 };
 int main()
 {
 	friend1 a;
 	friend2 b;
 	b.getdata(a);
 	
 }
