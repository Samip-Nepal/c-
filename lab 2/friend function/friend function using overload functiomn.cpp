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
	 friend complex operator +(complex a,complex b);
		void showdata()
		{
			cout<<"The value of real is:"<<real<<endl<<"The value of imag is:"<<imag;
		}
};
	complex operator +(complex a,complex b)
		{
			complex temp;
			temp.real=b.real+a.real;
		temp.imag=b.imag+a.imag;
		return temp;
			;
		}
int main()
{
complex a(7,5);
complex b(8,6);
complex c=a+b;
c.showdata();	
}
