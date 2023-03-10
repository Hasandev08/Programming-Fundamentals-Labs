#include <iostream>
using namespace std;
int main()
{
	double  a,b,c, avg ;
	
	cout << "Enter the marks of english :";
	cin >> a ;
	
	cout << "Enter the marks of urdu : " ;
	cin >> b ;
	
	cout << "Enter the marks of maths : ";
	cin >> c ; 
	
	avg = (a+b+c)/3;
	
	if (avg > 80 )
		cout <<" You are above the standard !   \n Admission Granted ! ";
	
	else
		cout <<"YOU FAILED !";
		
	return 0 ; 
}
