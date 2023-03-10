#include<iostream>
using namespace std;
int performOperation(int a, int b, char c)
{
	
	switch(c)
	{
		case'+':
		cout<<a+b;
		break;
		
		case'-':
		cout<<a-b;
		break;
			
		case'*':
		cout<<a*b;
		break; 
			
		case'/':
		cout<<a/b;
		break;
			
		case'M':
			if(a>b)
			cout<<a;
				
			else
			cout<<b;					
	}
	
	return c;
}

int main()
{
	int d,e;
	char ch;
	
	cout<<"Enter the two numbers "<<endl;
	cin>>d>>e;
	
	cout<<"Enter the operator"<<endl;
	cin>>ch;
	
	performOperation(d,e,ch);
	
	return 0;
}
