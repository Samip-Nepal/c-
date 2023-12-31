//WAP TO FIND THE AREA OF SQUARE,TRIANGLE AND CIRCLE IMPLEMENTING CONCEPT OF THE FUNCTION OVERLOADING 
#include<iostream>
#define pi 3.14
using namespace std;

int area(int l){
	int square ;
	square=l*l;
	return square;
	
}
int area(float h,float b)
{
	float triangle;
	triangle=(h*b)/2;
	return triangle;
}
double area(double r){
	double circle;
	circle=3.14*r*r;
	return circle;
}


int main(){

cout<<"the area of the square is"<< area(2)<<endl;
cout<<"the area of the triangle is"<<  area(2.00,4.00)<<endl;
cout<<"the area of the circle "<< area(8.0)<<endl;
return 0;
}


