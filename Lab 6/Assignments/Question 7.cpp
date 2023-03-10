#include<iostream>

using namespace std;
int main()
{
    int n,sum=0,i=1;
	
	cout<<"enter the number= "<<endl;
	cin>>n;
    
	for(;i<n;i++)
	 if(n%i==0)
	 {
	  	sum=sum+i;
	 }
	
	 if(sum==n)
		 cout<<i<<" is the perfect number";
	
	 else
	 	cout<<i<<"is the not A perfect number";

	return 0;
}
