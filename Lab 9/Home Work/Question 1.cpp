#include<iostream>
using namespace std;

void menu()
{
	cout<<"--------------------------------------------"<<endl;
	cout<<"Welcome to the fraction calculation "<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Please enter your fractions: "<<endl;
}

void addFraction(int a,int b,int c,int d, int&result, int&result2)
{
	result=(a*d)+(c*b);
	result2=(b*d);
}

void subtractFraction(int a,int b,int c,int d, int&result, int&result2)
{
	result=(a*d)-(b*c);
	result2=b*d;
}

void multiplyFraction(int a,int b,int c,int d, int&result, int&result2)
{
	result=a*c;
	result2=b*d;
}

void divideFraction(int a,int b,int c,int d, int&result, int&result2)
{
	result=a*d;
	result2=b*c;
}

int main()
{
	menu();
	
	int a,b,c,d;
	char x1,u;
	int result, result2;
	
	do
	{
		cout<<"Enter numerator for fraction1 = "<<endl;
		cin>>a;
	
		cout<<"Enter denominator for fraction1 = "<<endl;
		cin>>b;
	
		cout<<"Enter numerator for fraction2 = "<<endl;
		cin>>c;
	
		cout<<"Enter denominator fraction2 = "<<endl;
		cin>>d;
		
		do
		{
						
			cout<<"Please select your operation:"<<endl;
			cout<<"1.	Press 1 for addition"<<endl;
			cout<<"2.	Press 2 for subtraction"<<endl;
			cout<<"3. 	Press 3 for multiplication"<<endl;
			cout<<"4.	Press 4 for division"<<endl;
			cin>>u;
			cout<<endl;

			if(u=='1')
			{
				addFraction(a,b,c,d,result,result2);
				cout<<"Result is="<<result<<"/"<<result2;
				cout<<endl;
			}
		
				
				else if(u=='2')
			{
				subtractFraction(a,b,c,d,result,result2);
				cout<<"Result is="<<result<<"/"<<result2;
				cout<<endl;
			}
					
					else if(u=='3')
					{
						multiplyFraction(a,b,c,d,result,result2);
						cout<<"Result is="<<result<<"/"<<result2;
						cout<<endl;
					}
							
							else if(u=='4')
							{
								divideFraction(a,b,c,d,result,result2);
								cout<<"Result is="<<result<<"/"<<result2;
								cout<<endl;
							}
							
		cout<<"Do you want to continue for same fraction? Y/N"<<endl;
		cin>>x1;
		
	}
	
	while(x1!='N' && x1!='n');
	
	}
	
	while(x1!='y' && x1!='Y');
	
	return 0;
}
