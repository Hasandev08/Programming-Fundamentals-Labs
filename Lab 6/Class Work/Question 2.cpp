#include<iostream>

using namespace std;
int main ()
{
	int m,n,num,table,i=1;
	
	cout<<"Enter the number: ";
	cin>>num;
	
	for(n=1; n<=20; n++)
	{
		for(m=1; m<=10; m++)
		{
			table=num*i;
			cout<<table<<"\t";
			i++;
	    }
		
		cout<<endl;
	}

	return 0;
}

