#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int vowels=0;
	char *array[]={"safa is the best"};
	cout<<*array;
	cout<<endl;
	
	for(int i=0;i='\0';i++)
	{
		if (*array=="a" || *array=="e" || *array=="i" || *array=="o" || *array=="u")	
		{
			vowels++;
		}
	}
	cout<<"number of vowels = "<<vowels;	
}
