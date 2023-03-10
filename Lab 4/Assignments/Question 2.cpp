#include<iostream>

using namespace std;
int main()
{
	char a;
	
	cout<<"Enter your employment status"<<endl;
	cin>>a;
	
	if(a=='s'||a=='S')
	{
		cout<<"you are senior employ"<<endl;
		cout<<"salary= 400/week";
	}
	else if(a=='j'||a=='J')
	{
		cout<<"You are a junior employ"<<endl;
		cout<<"salary=275/week"<<endl;
	}
	else
		cout<<"ERROR"<<endl;
		
		return 0;
}
