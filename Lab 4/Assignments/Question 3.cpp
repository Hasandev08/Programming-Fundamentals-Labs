#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter the value of side a"<<endl;
	cin>>a;
	
	cout<<"Enter the value of side b"<<endl;
	cin>>b;
	
	cout<<"Enter the value of side c"<<endl;
	cin>>c;
	
	if((a*a)==(b*b)+(c*c))
		cout<<"The triangle is right angle";
		
	else
		cout<<"Triangle is not right angle";
		
	return 0;	
}
