#include<iostream>

using namespace std;
int main()
{
	int arr[5];
	int counter=0;
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter number "<<i+1<<endl;
		cin>>arr[i];
	}
	
	for(int i=0;i<5;i++)
	{
		counter = 0;
		for(int j=0; j<5 ; j++)
		{
			if(arr[i]==arr[j])
			counter++;
					
		}
		
		if(counter<2)
			{
				cout<<arr[i];
			}
	}
	
	
	return 0;	
	
}
