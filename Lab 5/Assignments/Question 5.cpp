#include<iostream>

using namespace std;
int main()
{
	int n,i,a,j;
	
	cout<<"Enter a number= "<<endl;
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		a=n%i;
		
		if(a==0)
		
		for(j=2; j<=(i-1); j++)
		{
			if(i%j==0)
			break;
		}
		
		if(i==j)
		cout<<i<<endl;
	}
	
	return 0;
}
