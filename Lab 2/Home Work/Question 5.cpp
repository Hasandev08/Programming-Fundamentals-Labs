#include<iostream>
using namespace std;
int main()
{
	int s,mins,hrs,sec;
	
	cout<<"please enter seconds"<<endl;
	cin>>s;
	
	hrs=s/3600;
	mins=(s-(3600*hrs))/60;
	sec=(s-(3600*hrs)-(mins*60));
	cout<<hrs<<":" << mins<<":"<<sec;
	
	return 0;
}
