//pass by value for the on=bject
#include<iostream>
using namespace std;
class population{
	int male ,female,total;
	public:
		void input(){
			cout<<"enter the number of male";
			cin>>male;
			cout<<"enter the number of female:";
			cin>>female;
		}
	population sum(population a,population b){
		population x;
			x.male=a.male+b.male;
			x.female=a.female+b.female;
			x.total=x.male+x.female;
			return x;
		}
		
		void showdata(){
			cout<<"the population of the male is:"<<male<<"\n the population of the female is:"<<female;
			cout<<"\nthe total is:"<<total;
		}
};
int main(){
	population a,b,c;
	a.input();
	b.input();
	c=c.sum(a,b);
	c.showdata();
	return 0;
	}
