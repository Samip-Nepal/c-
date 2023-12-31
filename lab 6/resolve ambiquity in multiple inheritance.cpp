#include<iostream>
using namespace std;
class samip 
{
	public:
		show()
		{
			cout<<"Samip";			
		}
};
class samip1:public virtual samip
{
};
class samip2:public virtual samip1
{
};
class samip3:public virtual samip2
{
};
int main()
{
	samip3 don;
	don.show();
}

