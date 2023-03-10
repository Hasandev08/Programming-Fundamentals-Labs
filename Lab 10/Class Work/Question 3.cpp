#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int flipcoin(int n);
int main()
{
	int arr[50],c=0,d=0,size;
	cin>>size;
	srand(time(0));
	for(int i=0;i<size;i++)
	{
		arr[i]=(rand()%2);
		
	}
	
	for(int i=0; i<size;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		c++;
		else
		d++;
	}
	
	cout<<"number\t\thistogram\n";
	
	for(int i=0;i<1;i++)
	{
		cout<<"0\t\t";
		for(int i=1;i<=c;i++)
		cout<<"*";
	}
	cout<<endl;
	
	
	for(int i=1;i<2;i++)
	{
		cout<<"1\t\t";
		for(int i=1;i<=d;i++)
		cout<<"*";
	}

	return 0;	
}
  
