#include<iostream>
using namespace std;
int findMax(int a, int b)
{
	if(a>b)
	{
		cout<<a<<endl;
	}
	
	else
		cout<<b<<endl;
}

int main()
{
	int c,d;
	
	cout<<"Enter two numbers"<<endl;
	cin>>c>>d;
	
	findMax(c,d);
	
	return 0;
}
