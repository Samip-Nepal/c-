#include<iostream>
using namespace std;
template <class num>
num large(num n1,num n2)
{
	if(n1>n2)
	{
		n2=n1;
	}

	return n2;
}

int main()
{
	int n1,n2;
	float f1,f2;
	char c1,c2;
	cout<<"Enter the two integer:"<<endl;
	cout<<"First integer=";
	cin>>n1;
	cout<<"Second integer=";
	cin>>n2;
	cout<<"The largest number between "<<n1<<" and "<<n2<<" is "<<large(n1,n2)<<endl;
	
	cout<<endl<<"Enter the two float value:"<<endl;
	cout<<"First float value=";
	cin>>f1;
	cout<<"Second float value=";
	cin>>f2;
	cout<<"The largest number between "<<f1<<" and "<<f2<<" is "<<large(f1,f2)<<endl;
	
	cout<<endl<<"Enter the two char:"<<endl;
	cout<<"First charcater=";
	cin>>c1;
	cout<<"Second character=";
	cin>>c2;
	cout<<"The largest number between "<<c1<<" and "<<c2<<" is "<<large(c1,c2);
	
	return 0;
}
