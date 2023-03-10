#include<iostream>

using namespace std;
int main()
{
	int n,counter;
	
	cout<<"Enter the value of n ";
	cin>>n;
	
	counter=0;
	
	do
	{
		++counter;
		cout<<counter<<",";
	}
	
	while(counter<=n);
	
	return 0;
}

