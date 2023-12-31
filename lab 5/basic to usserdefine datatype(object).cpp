#include<iostream>
using namespace std;
class don
{
	int length;
	public:
		don()
		{
		}
		don (int x)
		{
			length=x*100;
		}
		void show()
		{
			cout<<"The length after convertion:"<<length;
		}
};
int main()
{

int x=20;
don n;
n=x;
n.show();
}

