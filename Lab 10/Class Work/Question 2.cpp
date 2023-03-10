#include<iostream>
using namespace std;

int function(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int num1,num2;
	cout<<"Enter the value of numbers "<<endl;
	cin>>num1>>num2;
	
	function(num1,num2);
	
	cout<<"Numbers before swapping "<<endl;
	cout<<"Value of a= "<<num1<<endl;
	cout<<"Value of b= "<<num2<<endl;
	
	cout<<"Numbers after swapping "<<endl;
	cout<<"Value of a= "<<num2<<endl;
	cout<<"Value of b= "<<num1<<endl;
	
	return 0;
}
