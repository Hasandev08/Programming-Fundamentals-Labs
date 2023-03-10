#include<iostream>

using namespace std;
int main()
{
	int i,j,p,sum,a;
	
	sum=0;
	
	cout<<"Enter the value= "<<endl;
	cin>>a;
	
	for(i=2;i<=a;i++)
	{
		p=1;
		
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				p=0;
				break;
			}	
			
		}
		
		if(p==1)
		{
			sum=sum+j;
		}
	}
	
	cout<<"Sum= "<<sum;
	
	return 0;
}
