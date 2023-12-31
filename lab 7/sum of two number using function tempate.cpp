#include<iostream>
using namespace std;
template <class type>
type sum(type n,type m)
{
	return (n+m);
}

int main()
{
	int num1,num2;
	float f1,f2;
	cout<<"Enter the two integer value:"<<endl;	
	cout<<"First Number= ";
	cin>>num1;
	cout<<"Second Number= ";
	cin>>num2;
		
	
	cout<<"The sum of "<<num1<<" and "<<num2 <<" is "<<sum(num1,num2)<<endl;

	
	cout<<endl<<"Enter the two float value:"<<endl;	
	cout<<"First Number= ";
	cin>>f1;
	cout<<"Second Number= ";
	cin>>f2;
	
	
	cout<<"The sum of "<<f1<<" and "<<f2 <<" is "<<sum(f1,f2)<<endl;

		
	return 0;
}
