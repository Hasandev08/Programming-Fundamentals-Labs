#include<iostream>
using namespace std;
int main()
{
	int salary,netSalary;
	cout<<"Enter Salary="<<endl;
	cin>>salary;
	
	if(salary>=20000)
	{
	netSalary=salary-(salary*(7/100));
	cout<<"Net Salary="<<netSalary<<endl;
	}
				
		if(salary>=10000 && salary<20000)
		{
			netSalary=salary-1000;
			cout<<"Net Salary="<<netSalary<<endl;
		}
		else
		{
			netSalary=salary;
			cout<<"Net Salary="<<netSalary;
		}
		
		return 0;
}
