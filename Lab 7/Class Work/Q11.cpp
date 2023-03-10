#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int number[5],i,j,counter=0,square[5],cube[5],sum[5];
	
	
	for(i=0 ;i<5;i++)
	{
		number[i]=i;
	}
	
	for(i=0 ;i<5;i++)
	{
		square[i]=i*i;
	}
	
	for(i=0 ;i<5;i++)
	{
		cube[i]=i*i*i;
	}
	
	for(i=0 ;i<5;i++)
	{
		sum[i]=number[i]+square[i]+cube[i];
	}
	
	for(i=0 ;i<5;i++)
	{
		if(i==0)
		cout<<"Number: ";
		cout<<setw(5)<<number[i];
	}
	
	cout<<endl;
	
	for(i=0 ;i<5;i++)
	{
		if(i==0)
		cout<<"Square: ";
		cout<<setw(5)<<square[i];
	}
	
	cout<<endl;
	
	for(i=0 ;i<5;i++)
	{
		if(i==0)
		cout<<"Cube: ";
		cout<<setw(5)<<cube[i];
	}
	
	cout<<endl;
	
	for(i=0 ;i<5;i++)
	{
		if(i==0)
		cout<<"Sum: ";
		cout<<setw(5)<<sum[i];
	}

	return 0;
}
