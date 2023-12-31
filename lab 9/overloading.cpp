#include<iostream>
#include <fstream>
#include <cmath>
using namespace std;
class Complex {
    private:
        int real, imag;
    public:
    Complex(){
        real =0; imag = 0;    
    }
    friend ostream &operator << (ostream &a ,const Complex &c1);
       
    friend istream &operator >> (istream &b ,Complex &c1);
    
    Complex operator+(Complex &c){
        Complex ret;
        ret.real = real + c.real;
        ret.imag = imag + c.imag;
        return ret;
    }
    
};
istream & operator >> (istream &b, Complex &c1)
    {
    	cout<<"Enter real part";
    	b>>c1.real;
    	cout<<"Enter imaginary part";
		b>>c1.imag;
		return b;
			}
			
	 ostream & operator << (ostream &a, const Complex &c1)
	 {
	 	a<<"Real number is:"<<c1.real;
	 	a<<"Imaginary number is:"<<c1.imag;
	 	return a;
	 }

int main()
{
    
    Complex c1,c2,c3;
	cin>>c1;
	cin>>c2;
	c3=c1+c2;
	cout<<c3;
	return 0;
	

    
    
}
    
