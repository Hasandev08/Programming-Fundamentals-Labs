#include<iostream>

using namespace std;
int main()
{
	int num,T,r;
	
	cout<<"enter a number"<<endl;
	cin>>num;
	
	T=num;
	
	while(num!=0)
	{
	 int rem=num%10;
	 r=r*10+rem;
	 num=num/10;
	}
	
	if(T==r)
	cout<<"Number is palindrome";
	
	else
	cout<<"Number is not palindrome";

	return 0;
}
