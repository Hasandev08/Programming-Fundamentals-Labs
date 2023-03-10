#include<iostream>

using namespace std;
int main()
{
	int a,R,T,i=1,sum=0;
	long F;
	
	cout<<"enter a number= "<<endl;
	cin>>a;
	
	T=a;
	
	while(a>0)
 	{
         R=a%10;
         F=1;
		
		for(i=1;i<=R;i++)
		{
		 	F=F*i;
		}
			sum=sum+F;
			a=a/10;
			
		}
	
	if(sum==T)
		cout<<"number is strong"<<endl;

	else
		cout<<"number is not strong"<<endl;

	return 0;
}
