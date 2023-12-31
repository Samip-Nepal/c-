//wap to swap the two number using the concept of  the pass by referance
#include<iostream>
using namespace std;
void swap(int * num1, int * num2);///function declaration

int main()//function call
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
 cout<<"\n swapping number:\n";
    cout<<"\nValue of num1:\n"<<num1;
    cout<<"\nValue of num2 =  \n"<< num2;
    swap(&num1, &num2);
    return 0;
}

void swap(int * num1, int * num2)//function define
{
    int temp;

    temp = *num1;
    *num1= *num2;
    *num2= temp;

cout<<"\n swapped number:\n";
  cout<<"\nValue of num1 =  \n"<<*num1;
    cout<<"\nValue of num2 = \n"<<*num2;
}
