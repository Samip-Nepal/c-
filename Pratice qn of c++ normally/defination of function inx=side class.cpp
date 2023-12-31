#include<iostream>
using namespace std;
class  books{

		int x,y;
		public:
			void getdata(){ 
			cout<<"enter x and y";
				cin>>x>>y;//defination inside class
			
			}
			void showdata();
		
	};
void books::showdata(){
cout<<"the value of x and y are:"<<endl;//defination outside class
	cout<<x<<"\n"<<y;
}
int main(){
	books b;
	b.getdata();
	b.showdata();
	return 0;
	}
	