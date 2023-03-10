#include<iostream>

using namespace std;
int main()
{
	int n,i,sum,a,b;
	
	cout<<"Enter the value of n "<<endl;
	cin>>n;
	
	if(n==0)
		cout<<"Result= "<<n<<endl;
		
	else
	{
		cout<<a<<","<<b<<",";
		
		for(i=1; i<=n; i++)
		{
			sum=a+b;
			a=b;
			b=sum;
			
			cout<<sum<<",";
		}
		
	}

	return 0;	
}
