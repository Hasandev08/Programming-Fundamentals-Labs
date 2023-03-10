#include<iostream>

using namespace std;
int main()
{
	int year,roll,roll2;
	char ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13,ch14;
	
	cout<<"Enter your registration number= "<<endl;
	cin>>year>>ch5;
	
	if(year>=2015 && year<=2019 && ch5 == '-')
	{
		cin>>ch6>>ch7;
		if(ch6=='C' && ch7== 'D')
		{
			cin>>ch8>>ch9>>ch10;
			if(ch8=='-' && ch9=='C' && ch10=='S')
			{
				cin>>ch11;
				if(ch11=='-')
				{
					cin>>roll;
					if(roll>=1 && roll <=260)
					{
						cout<<"Registration number is valid"<<endl;
					}
					else
					{
						cout<<"Registration number is invalid"<<endl;
					}
				}
				else
				{
					cout<<"Registration is invalid"<<endl;
				}
			}	
			else
			{	
				cout<<"Registration is invalid"<<endl;
			}
		}
		else if(ch7=='S')
		{
			cin>>ch8;
			if(ch8=='-')
			{
				cin>>roll;
				if(roll>=1 && roll<=260)
				{
					cout<<"Registration number is valid"<<endl;
				}
				else
				{
					cout<<"Registration number is invalid"<<endl;
				}
			}
		}
		else if(year>=2015 && year<=2019 && ch5=='R')
		{
			cin>>ch6>>roll2;
			if(ch6 == '/' && (roll2>=2015 && roll2<=2019) && roll<roll2)
			{
				cin>>ch11>>ch12>>ch13>>ch14;
				if(ch11 == '-' && ch12 == 'C' && ch13=='S' && ch14 =='-')
				{
					if(roll>=1 && roll<=260)
					{
						cout<<"Registration number is valid"<<endl;
					}
					else
					{
						cout<<"Registration number is invalid"<<endl;
					}
				}
				else
				{
					cout<<"Registration number is invalid"<<endl;
				}
			}
			else
			{
				cout<<"Registration number is invalid"<<endl;
			}
			
		}
		else
		{
			cout<<"Registration number is invalid"<<endl;
		}
	
	return 0;
	}
	
}
