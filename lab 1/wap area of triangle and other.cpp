//Wap to calculate the area of traingle,circle,square using function overloading 
#include<iostream>
using namespace std;
#define PI 3.14
int area(int l)
{
	int square=l*l;
	return square;
	
}
int area(int x,int y)
{
	int traingle=(x*y)/2;
	return traingle;
	
}
int area(float r)
{
	int circle=PI*r*r;
	return circle;
	
}
int main()

{
int l,x,y;
float r;
cout<<"Enter the value of length:";
cin>>l;
cout<<"Enter the value of breath :";
cin>>x;
cout<<"Enter the value of height:";
cin>>y;
cout<<"Enter the radius:";
cin>>r;
cout<<"The area of square is:"<<area(l)<<endl;
cout<<"The area of tringle is:"<<area(x,y)<<endl;
cout <<"The area of circle is:"<<area(r)<<endl;
}
