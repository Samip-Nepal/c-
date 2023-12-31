#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main(){
	int a,b;
	cout<<"enter two number\n";
	cin>>a>>b;
	cout<<"\nther number to be swapped are:"<<a<<"\n"<<b;
	swap(a,b);
}
void swap(int &a,int &b){
	int temp;
	temp =a;
	a=b;
	b=temp;
	cout<<"\nthe swapped numbers are:"<<  a<<"\n"<<  b  ;
}
