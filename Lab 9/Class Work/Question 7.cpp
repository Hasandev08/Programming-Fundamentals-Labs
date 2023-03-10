#include<iostream>
using namespace std;
int product(int a, int n)
{
	int ans;
	for(int i=1; i<=n; i++)
	{
		if(i==1)
			ans=a;
			
		else
			ans=ans+a;
						
	}
	
	return ans;
	
}

int main()
{
	int b,c;
	
	cout<<"Enter the two values "<<endl;
	cin>>b>>c;
	
	int h=product(b,c);
	
	cout<<"Product= "<<h<<endl;
	
	return 0;
}
