#include<iostream>
using namespace std;
bool isEven(int n)
{
	if(n%2==0)
	return true;
	
	else
	return false;
}

int main()
{
	int a;
	
	cout<<"Enter the number "<<endl;
	cin>>a;
	
	int number= isEven(a);
	
	if(number)
	cout<<"Number is even "<<endl;
	
	else
	cout<<"Number is odd "<<endl;
	
	return 0;
}
