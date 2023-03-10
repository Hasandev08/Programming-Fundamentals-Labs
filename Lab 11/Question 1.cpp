#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int i=10000;
	int j=1;
	int *k=&j;
	
	while(*k<=10000)
	{
		cout<<setw(5)<<*k;
		++j;
	}
	
	return 0;
}

