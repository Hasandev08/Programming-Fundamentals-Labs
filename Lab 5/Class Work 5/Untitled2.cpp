#include<iostream>
using namespace std;

int main() 
{
	int a;
	cout << "Enter the Number :";
	cin>>a;
	int counter = 1;

	while (counter <= a) 
	{
		cout << "Execute While " << counter << " time" << endl;
		counter++;
	}
	
	return 0;
}
