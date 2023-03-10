#include<iostream>

using namespace std;
int main()
{
	int dividend,remainder,quotient,divisor;
	char input,Y,y;
	
	do
	{
		cout<<"Enter the dividend= ";
		cin>>dividend;
	
		cout<<"Enter the divisor= ";
		cin>>divisor;
	
		quotient=dividend/divisor;
		cout<<quotient;
		
		remainder=dividend%divisor;
		cout<<remainder; 
		
		cout<<"Enter Y/N "<<endl;
		cin>>input;
	}
	
	while(input=='Y' || input=='y');
	
	cout<<"End the program ";	
	
	return 0;
	
}
