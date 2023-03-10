#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,counter=0,b[10];
	
	cout<<"Enter 10 numbers: ";
	
	for(i=0 ;i<10;i++)
	{
		cin>>a[i];
	}
	
	for(int j=0 ; j<10 ; j++)
	{
		if(a[j]>=0)
		{
			b[counter]=a[j];
			counter++;
		}
	}
	
	for(int j=0 ; j<10 ; j++)
	{
		if(a[j] < 0)
		{
			b[counter]=a[j];
			counter++;	
		}
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

