//WAP TO FIND THE VOLUME WHOSE HEIGHT SHOULE BE GIVEN DEFAULT ARGUMENT WITH VALUE 10
#include<iostream>
using namespace std;
int volume(int l,int b,int h=10){
	int v;
	v=l*b*h;
	
	return v;	
}
int main(){

cout<<"the volume before the defaut argumrnt is"<< volume(1,2,3);
cout<<"\nthe volume after the default argument is"<< volume(2,3);

return 0;
}
