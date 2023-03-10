#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character:";
	cin>>ch;

	if (ch>=65 && ch<=90)
		cout<<"Character is a capital letter"<<endl;
		 
		 if (ch>=97 && ch<=122)
		cout<<"Character is a small letter"<<endl;
		 
		 if (ch>=48 && ch<=57)
		cout<<"Character is a digit"<<endl;
		 
		 if (ch>0 && ch<=47)
		cout<<"Character is a special symbol"<<endl;
		
	else
		cout<<"Program is finished";	
	
	return 0;
}
