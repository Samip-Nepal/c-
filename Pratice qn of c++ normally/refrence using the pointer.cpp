//pass by reference using pointer
#include<iostream>
using namespace std;
class complex{
	int real,imaginary;
	public:
		void input(){
		
		cout<<"enter the imaginary and real number:\n";
		cin>>real>>imaginary;
	}
complex sum(complex *x,complex *b)
	{
		complex a;
		a.real =x->real+b->real;
		a.imaginary=x->imaginary+b->imaginary;
		return a;
	}
	void showdata(){
		cout<<"sum is"<<real<<"+"<<imaginary<<"i";
	}
};
int main(){
	complex c1,c2,c3;
	c1.input();
	c2.input();
	c3=c3.sum(&c1,&c2);
	c3.showdata();
return 0;
}
