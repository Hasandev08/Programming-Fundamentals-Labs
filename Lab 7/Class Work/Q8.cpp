#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,counter=1,b[10];
	
	cout<<"Enter 10 numbers: ";
	
	for(i=0 ;i<10;i++)
	{
		cin>>a[i];
	}
	
	b[0]=a[0];
	
	for(int j=0 ; j<10 ; j++)
	{
		b[counter]=a[j]*a[j+2];
		counter++;
	}
	
	for(int i=0; i<10 ; i++)
	{
		a[i]=b[i];
	}
	
	cout<<"sorted array = ";
	
	for(i=0 ;i<10;i++)
	{
		cout<<a[i];
		cout<<" ";
	}

	return 0;
}

