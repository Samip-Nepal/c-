#include<iostream>
using namespace std;
class don
{
	int length;
	public:
		don()
		{
			length=0;
		}
		void getdata()
		{
			cin>>length;
		}
		operator int ()
		{
		int len	=length*100;
		return(len);
		}
		
		
};
int main()
{
don n;
n.getdata();
int x;
x=n;
	cout<<"The length after convertion:"<<x;
}

