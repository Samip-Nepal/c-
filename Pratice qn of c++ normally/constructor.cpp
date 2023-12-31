//constructor
#include<iostream>
using namespace std;
class test {
		public:
	int x;
	int y;
		test();
		void show (){
			cout<<x<<endl<<y;
		}
};
test::test(){
	
};
int main(){
	test t;
t.show();
	//cout<<t.x;
	return 0;
}
