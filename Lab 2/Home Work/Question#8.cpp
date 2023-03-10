#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	
	cout<<"enter litres of milk"<<endl;
	cin>>a;
    cout<<"total number of cartons are "<<a/3.78<<endl;
    cout<<"The cost for producing milk is $"<<a*0.038<<endl;
    cout<<"Total profit is "<<a*0.27<<endl;
    return 0;
}
