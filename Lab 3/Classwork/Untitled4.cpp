#include<iostream>

using namespace std;
int main()
{
	char ch;
	cout<<"Enter string:";
	cin.get(ch);
	cout<<endl;
	
	cout<<"After first cin.get(ch);"<<"ch="<<ch<<endl;
	cin.get(ch);
	
	cout<<"After putback"<<"cin.get(ch); ch= "<<ch<<endl;
	ch=cin.peek();
	
	cout<<"After cin.peek(); ch="<<ch<<endl;
	cin.get(ch);
	
	cout<<"After cin.get(ch); ch= "<<ch<<endl;
	
	return 0;
}
