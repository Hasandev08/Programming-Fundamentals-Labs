#include<iostream>
using namespace std;
int main()
{
	int basicSalary,jobGrade,totalSalary;
	cout<<"enter basic salary="<<endl;
	cin>>basicSalary;
	
	cout<<"enter job grade="<<endl;
	cin>>jobGrade;
	
	if (jobGrade>15)
		{
			totalSalary=basicSalary+((basicSalary)*50/100);
			cout<<"Total Salary="<<totalSalary<<endl;
		}
	else
		{
			totalSalary=basicSalary+((basicSalary)*25/100);
			cout<<"Total Salary="<<totalSalary;
		}
		return 0;	
}
