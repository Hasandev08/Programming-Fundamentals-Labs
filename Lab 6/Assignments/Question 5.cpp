#include<iostream>
using namespace std;
int main()
{
	int guests,chairs,F=1,s,j=1;
	
	cout<<"Enter the number of guests= "<<endl;
	cin>>guests;
	
	cout<<"Enter the number of chairs= "<<endl;
	cin>>chairs;
	
	if(guests>chairs)
	{
		for(int i=1;i<=guests;i++)
		{
			F=F*i;
			s=guests-chairs;
		}
		
		for(int k=1;k<=s;k++)
		
		j=j*k;
		cout<<"Total arrangements are = "<<F/j;
		
		
	}
	
	else
		cout<<"Invalid input";
	
	return 0;
}
