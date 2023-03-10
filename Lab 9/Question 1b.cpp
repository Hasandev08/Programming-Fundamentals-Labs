#include<iostream>
using namespace std;
double fraction(double n, double d)
{
	double frac;
	frac=n/d;
	return frac;	
} 

int performOperation(int a, int b, char c)
{
	
	switch(c)
	{
		case'1':
		cout<<a+b;
		break;
			
		case'2':
		cout<<a-b;
		break;
		
		case'3':
		cout<<a*b;
		break; 
		
		case'4':
		cout<<a/b;
		break;
	}
	
	return c;
}
	
int main()
{
	z:
	double d,e;
	cout<<"Enter numerator 1"<<endl;
	cin>>d;
	cout<<"Enter denominator 1"<<endl;
	cin>>e;
	double f=fraction(d,e);
	cout<<d<<"/"<<e<<"="<<f<<endl;
	
	double g,h;
	cout<<"Enter numerator 2"<<endl;
	cin>>g;
	cout<<"Enter denominator 2"<<endl;
	cin>>h;
	double i=fraction(g,h);
	cout<<g<<"/"<<h<<"="<<i<<endl;
	
	char j;
	cout<<"Please Select your operation"<<endl;
	cout<<"Enter 1 for addition"<<endl;
	cout<<"Enter 2 for subtraction"<<endl;
	cout<<"Enter 3 for multiplication"<<endl;
	cout<<"Enter 4 for division"<<endl;
	cin>>j;
	
	performOperation(f,i,j);
	
	char Y,N;
	cout<<"Do you want to continue? (Y/N)"<<endl;
	cin>>Y,N;
	
	if(Y)
	{
		goto z;
	}
	
	else
	{
		cout<<"End the program"<<endl;
	}

	return 0;

}
