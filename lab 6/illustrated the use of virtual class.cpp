#include<iostream>
using namespace std;
class samip{
	public:
		virtual void don()
		{
		cout<<"Samip"<<endl;	
		}
};
class samip1:public samip
{
public:
	void don()
{
cout<<"Nepal"<<endl;	
}
};
int main()
{
	samip1 a;
	samip*samip1=&a;
	samip1->don();
	return 0;
}
