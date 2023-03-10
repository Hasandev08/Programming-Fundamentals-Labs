#include<iostream>

using namespace std;
int main()
{
	int i,j=1,n;
	
	cout<<"Enter the value= "<<endl;
	cin>>n;
	
	while(i<=n)
	{
		//j=1;
		
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
	
}
