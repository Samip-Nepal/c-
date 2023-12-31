#include<iostream>
using namespace std;
class str
{
	string name;
	public:
		str()
		{
			name=" ";
		}
			str(string a)
		{
			name=a;
		}
		void showdata()
		{
			cout<<name;
		}
		str operator +(str x)
		{
		name=name+x.name;
		return *this;
		}
};
int main()
{
	str a("Samip ");
	str b("Nepal");
	str c=a+b;
	c.showdata();
}
