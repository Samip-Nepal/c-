#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	public:
		complex()
		{
			real=0;
			imag=0;
		}
			complex(int x,int y)
		{
			real=x;
			imag=y;
		}
		complex operator +(complex a)
		{
			real=real+a.real;
			imag=imag+a.imag;
			return *this;
		}
		void showdata()
		{
			cout<<"The value of real is:"<<real<<endl<<"The value of imag is:"<<imag;
		}
};
int main()
{
complex a(7,5);
complex b(8,6);
complex c=a+b;
c.showdata();	
}
