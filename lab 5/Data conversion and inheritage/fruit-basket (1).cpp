#include<iostream>
using namespace std;
class apple
{
	protected:
		int apples;
	
		public:
			apple()
			{
				apples=0;
			}
			void getdata()
			{
				cout<<"Put  the number of apples:";
				cin>>apples;
			}	
};

class mango
{
	protected:
		int mangos;
		
		public:
			mango()
			 {
			 	mangos=0;
			 }
			 
			 void getdata()
			 {
			 	cout<<"Put the number of mangoes:";
			 	cin>>mangos;
			 }
			 
};

class basket :public mango,public apple
{
	int totalfruit;
	
	public:
		basket()
		{
			totalfruit=0;
		}
		
		void total()
		{
			totalfruit=mangos+apples;
		}
		
		void showdata()
		{
			cout<<endl<<"Amount  of apples in basket="<<apples<<endl;
			cout<<"Amount of mangoes in basket="<<mangos<<endl;
			cout<<"Total no of apple and mangoes in basket="<<totalfruit;
		}
};

int main()
{
	mango m;
	apple a;
	basket b;
	b.mango::getdata();
	b.apple::getdata();
	b.total();
	b.showdata();
	return 0;
}
