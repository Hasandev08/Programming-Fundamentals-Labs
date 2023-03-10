#include <iostream>

using namespace std;
int main()
{
	int i,n,j;
	
	cout<<"Enter any number= "<<endl;
	cin>>n;

	for(j=2; j<=n; j++)
 	{
   		for(i=2; i<=(n-1); i++)
     	{
        	if(j%i==0)
        	break;
	 	}
	 
	if(i==j)
		cout<<j<<endl;
  
  }
	return 0; 	
}
