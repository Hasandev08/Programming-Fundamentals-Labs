#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int *a;
	int arr[6];
	
	cout<<"Enter the elements of arrays ";
	for(int i=0; i<6; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0; i<6; i++)
	{
		a=&arr[i];
		cout<<*a<<"\t";
	}
	
	cout<<endl;
	
	for(int i=5; i>=0; i--)
	{
		a=&arr[i];
		cout<<*a<<"\t";
	}
}
