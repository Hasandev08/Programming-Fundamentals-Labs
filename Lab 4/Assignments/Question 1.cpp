#include<iostream>

using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter the value of integers\n";
	cin>>a>>b>>c;
	
	cout<<a<<b<<c<<endl;
	cout<<a<<c<<b<<endl;
	cout<<b<<a<<c<<endl;
	cout<<b<<c<<a<<endl;
	cout<<c<<a<<b<<endl;
	cout<<c<<b<<a;
	
	return 0;
}
