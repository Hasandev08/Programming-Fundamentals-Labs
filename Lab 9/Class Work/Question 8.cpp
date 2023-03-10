#include<iostream>
using namespace std;
const int a=10;

int product(int h)
{
	int b=h*2;
	return b;
}

int main()
{	
	int c=product(a);
	cout<<"Product= "<<c<<endl;
	cout<<"Global value= "<<a<<endl;
	
	return 0;

}
