#include<iostream>
using namespace std;
class helo{
	private:
		static int count;
		int number;
		public:
			void setval(int num){
				number =num;
				--count;
				
			}
			void show(){
				cout<<"the setval() is"<<count<<endl;
				
			}
};
int helo ::count=1;
int main(){
	helo a,b;
	a.setval(100);
	a.show();
	b.setval(200);
	b.show();
	b.setval(400);
	a.show();
	return 0;
}
