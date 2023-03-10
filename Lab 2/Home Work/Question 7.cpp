#include<iostream>
using namespace std;
int main()
{
	double size,realsize;
	
	cout<<"enter the value of size";
	cin>>size;
	
	size=size*1000*1000;
	
	realsize=size/1024/1024;
	cout<<"realsize="<<realsize<<"GB"<<endl;
	
	return 0;
}
