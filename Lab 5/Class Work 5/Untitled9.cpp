#include<iostream>

using namespace std;
int main()
{
	int n,counter;
	
	cout<<"Enter the value of integer"<<endl;
	cin>>n;
	
	counter=0;
	
	while(counter<=n)
	{
		cout<<counter<<",";
		++counter;
	}

	return 0;
}
