#include<iostream>
#include<string.h>
using namespace std;
void name(int n,string a)
{
	for(int i=1;i<=n;i++)
	{
		cout<<a<<endl;
	}
}

int main()
{
	int b;
	string c;
	
	cout<<"Enter the value of n"<<endl;
	cin>>b;
	
	cout<<"Enter name"<<endl;
	cin>>c;
	
	name(b,c);
	
	return 0;
}
