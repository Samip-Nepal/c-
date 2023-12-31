#include<iostream>
using namespace std;
class test {
	int x,y;
	public:
		test(int a,int b) {
			x=a;
			y=b;
			cout<<x<<"\n"<<y<<endl;
		}
};
int main(){
//	test t1(3,4);
test t1,t2;
test t2(t1);
}
