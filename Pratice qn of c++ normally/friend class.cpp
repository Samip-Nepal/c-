#include<iostream>
using namespace std;
class a{
	int x,y;
	public :
		friend class b;
};
class b{
	public:
		void getdata(a l){
			cin>>l.x>>l.y;
			cout<<"the value of x and y is"<<l.x<<l.y;
			cout<<"the sum is:"<<l.x+l.x;
			
		}
};
int main(){
	a l;
	b y;
	y.getdata(l);
	return 0;
}
