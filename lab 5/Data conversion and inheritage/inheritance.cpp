#include<iostream>
using namespace std;
class Mammals
{
	public:
	void showdata()
	{
		cout<<"I am mammal."<<endl;
	}
};
class MarineAnimals
{
	public:
	void showdata()
	{
	cout<<"I am a marine animal."<<endl;
	}
};

class BlueWhale:public Mammals,public MarineAnimals
{
	public:
	void showdata()
	{
		cout<<"I belong to both the categories of animals."<<endl;
	}
};

int main()
{
	Mammals a;
	MarineAnimals b;
	BlueWhale c;
	a.showdata();
	b.showdata();
	c.showdata();
	c.Mammals::showdata();
	c.MarineAnimals::showdata();
	
}
