#include<iostream>

using namespace std;
int main()
{
	int exponent, result=1, base, i;
	
	cout<<"base"<<"^"<<"exponent"<<"=";
	cin>>base>>exponent;
	
	while(exponent!=0)
	{
		result=result*base;
		--exponent;
	}
	
	cout<<result<<endl;

	return 0;
}
