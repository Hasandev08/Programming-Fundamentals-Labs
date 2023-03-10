#include<iostream>

using namespace std;
int main()
{
	char a,b,Y,N;
	int n,i,factorial;
	
	
	
	a:
		cout<<"Enter the value of n= ";
	cin>>n;
	i=1;
	factorial=1;
	while(i<=n)
	{
		
		factorial=i*factorial;
		i++;
	
	}
		cout<<factorial<<endl;
		
		cout<<"Enter Y/N"<<endl;
		cin>>b;
		
	if(b=='Y')
	{
		goto a;
	}

	else
		cout<<"End the program";
			
	return 0;
	
}
