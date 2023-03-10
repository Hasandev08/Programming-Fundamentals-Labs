#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,e ;
	
	cout << "Enter the value of a : ";
	cin >> a ;
	
	cout << "Enter the value of b : ";
	cin >> b ;
	
	cout << "Enter the value of c : ";
	cin >> c ;
	
	cout << "Enter the value of d : ";
	cin >> d ;
	
	cout << "Enter the value of e : ";
	cin >> e ;
	
	if (a>b && a>c && a>d && a>e)
		cout <<"a is the largest value.\n";
	else 
		cout <<"a is not largest value.\n";
	
	if (b>a && b>c && b>d && b>e)
		cout <<"b is the largest value.\n";
	else
		cout <<"b is not largest value.\n";
	
	if (c>a && c>b && c>d && c>e)
		cout <<"c is the largest value.\n";
	else
		cout <<"c is not largest value.\n";
	
	if (d>a && d>b && d>c && d>e)
		cout <<"d is the largest value.\n";
	else
		cout <<"d is not largest value.\n";
	
	if (e>a && e>b && e>c && e>d)
		cout <<"e is the largest value.\n";
	else
		cout <<"e is not largest value.\n";
	
	if (a<b && a<c && a<d && a<e)
		cout <<"a is the smallest value.\n";
	else 
		cout <<"a is not smaller value.\n";
	
	if (b<a && b<c && b<d && b<e)
		cout <<"b is the smallest value.\n";
	else
		cout <<"b is not smaller value.\n";
	
	if (c<a && c<b && c<d && c<e)
		cout <<"c is the smallest value.\n";
	else
		cout <<"c is not smaller value.\n";
	
	if (d<a && d<b && d<c && d<e)
		cout <<"d is the smallest value.\n";
	else
		cout <<"d is not smaller value.\n";
	
	if (e<a && e<b && e<c && e<d)
		cout <<"e is the smallest value.\n";
	else
		cout <<"e is not samller value.\n";
	
	return 0 ;
}
