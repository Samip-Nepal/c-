#include<iostream>
using namespace std;
template <class num>
void sum(num n)
{
	num a[100],sum;
	int b,i;
	cout<<"Enter the data many you want:";
	cin>>b;
	cout<<"Enter the "<<b<<" data below:"<<endl;
	if(n=='char')
	{
		string s;
		for(i=0;i<b;i++)
		{
			cin>>a[i];
			s+=a[i];
			//strcat(sum1,a[i]);
		}
		cout<<"The sum of "<<b<<" data is "<<s<<endl;
	}
	else
	{
		for(i=0;i<b;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		cout<<"The sum of "<<b<<" data is "<<sum<<endl;
	}
}

int main()
{
	cout<<endl<<"Enter to find the sum of integers:"<<endl;
	sum(1);
	
	cout<<endl<<"Enter  to find the sum of float values:"<<endl;
	sum(1.1);
	
	cout<<endl<<"Enter  to find the sum of character values:"<<endl;
	sum('c');
		
	return 0;
}
