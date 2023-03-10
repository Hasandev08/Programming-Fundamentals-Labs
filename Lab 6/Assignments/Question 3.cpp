#include<iostream>

using namespace std;
int main()
{
	int rows,i,j,k;
	
	cout<<"enter the no.of rows"<<endl;
	cin>>rows;
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows-i;j++)

			cout<<" ";
			for(k=1;k<=2*i-1;k++)
			{
				cout<<"X";
			}
			cout<<endl;

	}
	
	return 0;
}

