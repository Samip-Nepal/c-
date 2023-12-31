//complex class inside real and imaginary data function chai iside class
//sum function ma object pass garne  showfunction 
//pass by object
#include<iostream>
using namespace std;
class complex{
	int real,imaginary;
	public:
		void input(){
		
		cout<<"enter the imaginary and real number:\n";
		cin>>real>>imaginary;
	}
	void sum(complex x,complex b)
	{
		
		real =x.real+b.real;
		imaginary=x.imaginary+b.imaginary;
		
	}
	void showdata(){
		cout<<"sum is"<<real<<"+"<<imaginary<<"i";
	}
};
int main(){
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c3.sum(c1,c2);
	c3.showdata();
return 0;
}
