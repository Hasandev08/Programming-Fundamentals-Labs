#include<iostream>

using namespace std;
int main()
{
	int rows,columns,table,i=1,n,m;
	
	cout<<"Enter the number of rows= "<<endl;
	cin>>m;
	
	cout<<"Enter the number of columns= "<<endl;
	cin>>n;
	
	for(rows=1; rows<=m; rows++)
	{
		for(columns=1; columns<=n; columns++)
		{
			table=rows*columns;
			cout<<table<<"\t";
			
		}
		
		cout<<endl;
	}
	
	return 0;
}
