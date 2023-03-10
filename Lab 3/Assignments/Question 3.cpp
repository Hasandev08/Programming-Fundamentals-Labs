#include<iostream>
using namespace std;
int main()
{
	char char1;
	cout<<"Enter string=";
	cin.get(char1); //get first letter from string and print the selected letter and go to next character
	cout<<endl;
	cout<<"char1="<<char1<<endl;
	cin.get(char1); //read the next character from string and print that 2 letter and go to next character
	cout<<endl;
	cout<<"char1="<<char1<<endl;
	
	cin.putback(char1); //read the previous character by second cin.get 
	cin.get(char1);
	cout<<endl;
	cout<<"char1="<<char1<<endl;
	
	char1=cin.peek(); //prints next character after putback is used
	cout<<"char1="<<char1<<endl;
	
	cin.get(char1); //reads the character used by peek and print it on the screen
	cout<<endl;
	cout<<"char1="<<char1<<endl;
	
	return 0;
}
