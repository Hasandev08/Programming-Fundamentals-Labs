#include<iostream>
using namespace std;
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,0},i,f;
	
	cout<<"Which element Do you want to find: ";
	cin>>f;
	
	for(i=0 ;i<10;i++)
	{
		if(a[i]==f)
		cout<<"The element is stored at a["<<i<<"]";
	}

	return 0;
}

