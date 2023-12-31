/*//user defined =as per the requirement of user and alsoshows data
memory reserved gardaian 
data allocate matrai garxa
argumnet can be passed
eg:
	test(int x,int y){
		data=x;
		data1=y
	
}*/
//parameterix\zed constructor
#include<iostream>
using namespace std;
class test{
	private:
		int data ,data1;
		public:		
			test(int x,int y)
			{
				data=x;
				data1=y;
				
			}
			void show()
			{
				cout<<data<<endl<<data1;
			}
};
int main(){
	//test t1(7,8);
	//implicit
	test t1=test(2,4);
	t1.show();
	return 0;
}


