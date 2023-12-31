#include<iostream>
using namespace std;
class books{
	private:
		int booknumber;
		public :
			string bookname;
			 void getdata(){
			 	cout<<"enter number ofbook is:\n";
			 	cin>>booknumber;

			}
			void showdata();
			
};
void books::showdata(){
	cout<<"the book number is:\n";
	cout<<booknumber<<endl;
	
}
int main(){
	books b;
	b.bookname;
	cout<<"Enter the bookname";
	cin>>b.bookname;
	b.getdata();
	b.showdata();
	return 0;
}