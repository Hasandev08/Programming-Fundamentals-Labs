#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int num,base,i=1;
	
	cout<<"enter the base :"<<endl;
	cin>>base;
	
	cout<<"enter the number :"<<endl;
	cin>>num;
	
	for(;num!=0;i++)
	{
		if(pow(base,i)>num)
		break;
	}
	
	cout<<"The value of e is ="<<i;

	return 0;
}
