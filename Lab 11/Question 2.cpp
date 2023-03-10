#include<iostream>
#include<iomanip>

using namespace std;

void swap(int a, int b)
{
	int *c=&a;
	int *d=&b;

	cout<<"Value of a before swapping "<<setw(5)<<*c<<endl;
	cout<<"Value of b before swapping "<<setw(5)<<*d<<endl; 

	c=&*d;
	d=&a;
	
	cout<<"Value of a after swapping "<<setw(5)<<*c<<endl;
	cout<<"Value of b after swapping "<<setw(5)<<*d<<endl;
	
}

int main()
{
	int a,b;
	
	cout<<"Enter the value of a "<<endl;
	cin>>a;
	
	cout<<"Enter the value of b "<<endl;
	cin>>b;
	
	swap(a,b);
	
	return 0;
}
