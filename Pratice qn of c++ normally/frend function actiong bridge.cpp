#include<iostream>
using namespace std;
class two;
class one{
	int x;
	public:
		void get(){
			cout<<"enter the x1:";
			cin>>x;
		}
			friend void sum(one a,two b);

	};
		
	class two{
		int x;
		public:
			void get(){
				cout<<"enter the x2:";
				cin>>x;
			}
					friend void sum(one a,two b);

	};
	void sum(one a ,two b){
		cout<<"enter the number  added is:";
		cout<<a.x+b.x;
		
	}
	int main(){
		one l;
		two m;
		l.get();
		m.get();
		sum(l,m);
		return 0;
}
