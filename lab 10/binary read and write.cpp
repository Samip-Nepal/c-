#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int x=9;
	double y=4;
	fstream file;
	file.open("first.bin",ios::binary);
	file.write((char *)&x,sizeof(x));
	file.write((char *)&y,sizeof(y));
	file.close();
	file.read((char *)&x, sizeof(x));
	file.read((char *)&y, sizeof(y));
	cout<<x<<endl<<y;
	file.close();
	return 0;
}
