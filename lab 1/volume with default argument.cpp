//Wap to find volume where the height should be given default argument with value 10.
#include<iostream>
using namespace std;
void volume (int l,int b,int h=10)
{
	int result=l*b*h;
	cout<<"The volume is:"<<result;
}
int main()
{
	int l,b,h;
	cout<<"Enter the value of length:";
	cin>>l;
		cout<<"Enter the value of breath:";
		cin>>b;
	volume(l,b);
}
