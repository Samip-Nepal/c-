#include<iostream>
using namespace std;
class student{
	int x,y;
	void getdata()
	{ 
	cin>>x>>y;
	}
	public:
		void showdata(){
			getdata();
			cout<<"the x \n"<<x<<"and"<<y<<endl;
		
		}
};
int main(){
	int i;
	student s[5];
	for(i=0;i<5;i++){
		s[i].showdata();
	}
}
