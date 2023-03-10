#include<iostream>

using namespace std;
int main()
{
	int n;
	cout<<"Enter a positive integer"<<endl;
	cin>>n;
	
	int counter=0;
	
	while(counter<=n)
	{
		if(counter%2==0)
		
		cout<<counter<<",";
		counter++;
	}
	
	cout<<"\b";
	
	return 0;
	
}

