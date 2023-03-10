#include<iostream>

using namespace std;
int main()
{
	int a[5];
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter number"<<endl;
		cin>>a[i];
	}
	
	int j=0;
	for(int i=0; i<5; i++)
	{
		if(a[i]>a[j])
		{
			j++;
		}
		
	}
		cout<<"The largest value is= "<<a[j]<<endl;
	
	int k=0;
	
	for(int i=0; i<5; i++)
	{
		if(a[i]<a[k])
		k++;
	}
	
	cout<<"The smallest value is= "<<a[k]<<endl;

	return 0;
}
