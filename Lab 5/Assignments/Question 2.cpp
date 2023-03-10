#include<iostream>

using namespace std;
int main()
{
	int a,i;
	
	cout<<"Enter the value of a "<<endl;
	cin>>a;
	
	for(i=2; i<=a; i++)
	{
		if(a%i==0)
		break;
	}
	
	if (i==a)
		cout<<"Number is prime"<<endl;
	else
		cout<<"Number is not prime "<<endl;
		
	return 0;		
}
