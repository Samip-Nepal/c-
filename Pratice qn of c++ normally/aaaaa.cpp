#include<iostream>
using namespace std;
class test {
	int x;
	public:
		test(){
			cin>>x;
			cout<<x <<endl;
		}
		test(int a){
			x=a;
		
		}
		test (test &b){
					x=b.x;
					cout<<x<<endl;
		}
};
int main(){
	test t1;
	test t2(5);
	test  t4(t2);
	test t3=t1;
	return 0;
}
