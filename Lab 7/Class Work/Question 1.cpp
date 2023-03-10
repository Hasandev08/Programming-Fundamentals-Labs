#include<iostream>

using namespace std;
int main()
{
	int arr[6];
	int sum=0,product=1;
	
	for(int i=0;i<6;i++)
	{	
		cout<<"Enter number "<<i+1<<endl;
		cin>>arr[i];
	}
	
	for(int j=1; j<6; j++)
	{
		sum=sum+arr[j];
	}
	
	for(int k=1; k<6; k++)
	{
		product=product*arr[k];
	}
	
	cout<<"Sum="<<sum;
	cout<<"Product="<<product;
	
	return 0;
}
