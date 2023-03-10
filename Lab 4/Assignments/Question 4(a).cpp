#include <iostream>

using namespace std;
int main()
{
    int num1,num2,num3;
    char operation;
    cout << "Enter two numbers"<<endl;
  	cin >> num1 >> num2;
  	
  	cout<<"Enter operation"<<endl;
  	cin>>operation;
  	
  	if(operation=='+')
  	cout<<"num1+num2"<<num1+num2<<endl;
  	
  	else if(operation=='-')
  	cout<<"num1-num2"<<num1-num2<<endl;
  	
  	else if(operation=='*')
  	cout<<"num1*num2"<<num1*num2<<endl;
  	
  	else if(operation=='/')
  	{
  		if((num1==0)||(num2==0))
  		{
  			cout<<"can't divide by 0="<<endl;
  			return 1;
		}
		else
			cout<<num1/num2<<endl;
	}
  	
  	else if(operation=='%')
  	cout<<"num1%num2="<<num1%num2<<endl;
  	
  	else if (operation=='|')
  	{	
	 	num3=num1|num2;
	 	cout<<"num1|num2="<<num3<<endl;
	 	
	}
	
	else if(operation=='&')
	{
		num3=num1&num2;
		cout<<"num1&num2="<<num3<<endl;
		
	}
	
	else if(operation=='!')
	cout<<"!num1="<<!num1<<endl<<"!num2="<<!num2;
	
	else if(operation=='<')
	{
		num3=num1<num2;
		cout<<"num1<num2="<<num3<<endl;
	}
  	
	else if (operation=='>')
	{
		num3=num1>num2;
		cout<<"num1>num2="<<num3<<endl;
	}
	
	else if(operation=='=')
	{
		num3=num1=num2;
		cout<<"num1=num2="<<num3<<endl;
	}
	  
	  else
  	cout<<"Enter right operation";
  	
    return 0;
}

