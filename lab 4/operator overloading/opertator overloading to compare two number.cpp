#include<iostream>
using namespace std;
class dis
{
int value;
public:
		dis()
		{
			value=0;
		}
			dis(int val)
		{
			value=val;
		}
		
			dis operator<=(dis a)
			{
				dis temp;
				if(value<=a.value)
				{
					value=a.value;
				}
				return *this;
			}
							
		int getdata()
		{
		cin>>value;
	}
};
int main()
{
	dis num1(5);
	dis num2(10);
	 dis result=num1<=num2;
	cout<<"The greater is:"<<result<<endl;
	return 0;
}

