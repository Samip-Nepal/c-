/*wap complex program
*/
#include<iostream>
using namespace std;
class complex
{
	int real,imag;
	 public:
	 	void getdata()
	 	{
	 		cout<<"Enter the real value:";
	 		cin>> real;
	 		cout<<"Enter the imaginary value:";
	 		cin>> imag;
		 }
		 public:
		 	void sum(complex x,complex y)
		 	{
		 		real=x.real+y.real;
		 		imag=x.imag+y.imag;
		 	
			 }
			 public:
			 	void showdata()
			 	{
			 		cout<<"The value of real and imaginary is:"<<real<<"+"<<imag<<"j";		 		
				 }	 	
};
int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3.sum(c1,c2);
	c3.showdata();
	
	
}
