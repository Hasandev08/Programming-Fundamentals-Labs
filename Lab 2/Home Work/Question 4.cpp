#include<iostream>
using namespace std;
int main()
{
	int a,b,c,s,area;

	cout<<"enter the value of a"<<endl;
	cin>>a;
	
	cout<<"enter the value of b"<<endl;
	cin>>b;
	
	cout<<"enter the value of c"<<endl;
	cin>>c;
	
	s=(a+b+c)/2;
	cout<<s<<endl;
	
	area = (s*(s-a)*(s-b)*(s-c)) ^ 1/2;
	cout<<area<<endl;
	
	return 0;
}
