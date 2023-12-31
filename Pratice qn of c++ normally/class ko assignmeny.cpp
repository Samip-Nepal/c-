#include<iostream>
using namespace std;
class info{
	public:
		static int count ; //static data member 
		int number ;//data member 
		public:
			void setval(int num){
				number =num;
				++count;
			}
			void show(){
				cout<<"call of setval()made"<<count<<"times"<<endl;
			}
};
int info::count=0;
int main(){
	info a,b,c;
//info::count =6;
	a.show();//0 6
	a.setval(100);
	a.show();//1 0+1 7
	b.setval(200);
	b.show();
	c.setval(300);
	c.show();//3 obj c=3 so 1+2 9
	c.setval(500);
	b.show();//4 10
	
}
