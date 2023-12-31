#include<iostream>
using namespace std;
class add_amount
{
	public:
		int amount=50;
		int total;
		add_amount()
		{
			cout<<"The piggie bank has Rs"<<amount<<" without adding any amount"<<endl;
		}
		add_amount(int a)
		{
			total=amount+a;
		}
		add_amount(add_amount&x)
		{
			cout<<"The piggie bank has  total Rs "<<x.total<<endl;
			
		}
};
int main()
{
	add_amount b;
	int a;
	cout<<"Enter the amount to add:"<<endl;
	cin>>a;
	add_amount c(a);
	add_amount d=c;
	return 0;
}

