#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	double a,b,c,x1,x2,disc,realPart,imaginaryPart;
	
	cout<<"Enter the coefficients of a"<<endl;
	cin>>a;
	
	cout<<"Enter the coefficients of b"<<endl;
	cin>>b;
	
	cout<<"Enter the coefficients of c"<<endl;
	cin>>c;
	
	disc=b*b-4*a*c;
	x1 = (-b + sqrt(disc)) / (2*a);
	
	if(disc>0)
	{ 
		cout<<"Roots are real and different"<<endl;
		cout<<"x1="<<x1<<endl;
	}
		if(disc==0)
		{
		cout<<"Roots are real and equal"<<endl;
        cout << "x1 = x2 =" << x1 <<endl;
		}
	else
		{
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
		}
		
	return 0;
}
