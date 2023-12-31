#include<iostream>
using namespace std;
class test{
	int x,y;
	public:
		test(){
		cout<<"enter x and y";
		cin>>x>>y;
		cout<<x<<"\n"<<y;
		}
};
int main (){
	test t;
}
