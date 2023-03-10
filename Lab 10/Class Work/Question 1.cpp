#include<iostream>
using namespace std;
 
int m(int a)
{
	static int m=0;
	m++;
	cout<<m<<endl;
}

int main()
{
	int b,size;
	cout<<"Enter the value of size= "<<endl;
	cin>>size;
	
	for(int i=0; i<size; i++)
	m(b);
	
	return 0;
}
