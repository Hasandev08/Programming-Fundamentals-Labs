#include<iostream>

using namespace std;
int main()
{
	int factorial = 1;
	int a,i,b=1;
	double sum = 0;
	double fact ;
	cout<<"Enter the value "<<endl;
	cin>>a;
	
	if(a!=0)
		{
			for(i=1; i<=a; i++)
			{
				factorial=factorial*b;
				
				b++;
				fact = 1.0/factorial;
				
				sum=sum+(fact);
				cout<<sum;	
			}
		}
		
		
	else
	cout<<"e= "<<sum;	

	return 0;
}
