#include<iostream>
using namespace std;
int calculateFactorial(int n)
{	
	int product=1;
	
	for(int i;i<=n;i++)
	{
		product=product*i;
	}
	
	return product;
	
}

int main()
{
	int a,b;
	
	cout<<"Enter the number"<<endl;
	cin>>a;
	
	b=calculateFactorial(a);
	
	cout<<"Factorial= "<<b;
	
	return 0;
	
	
}
