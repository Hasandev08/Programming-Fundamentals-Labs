#include<iostream>

using namespace std;
int main()
{
	int dividend,remainder,quotient,divisor;
	char a,input,Y,y;
	
	a:
		cout<<"Enter the dividend= "<<endl;
		cin>>dividend;
	
		cout<<"Enter the divisor= "<<endl;
		cin>>divisor;
	
		quotient=dividend/divisor;
		cout<<quotient<<endl;
		remainder=dividend%divisor;
		cout<<remainder; 
		cout<<"\nEnter Y/N"<<endl;
		cin>>input;
	
	for(;input==Y||y;)
	{
		goto a;
	}
	cout<<"End the program ";	
	
	return 0;
	
}
