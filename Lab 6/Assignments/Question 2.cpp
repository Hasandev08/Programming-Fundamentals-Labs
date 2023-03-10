#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	a:
		int nOfStudents,nSubjects,marks,counter=1,subject,sum=0;
		double avg;
		char ch;
		cout<<fixed<<showpoint<<setprecision(2);
		cout<<"Enter the number of students ";
		cin>>nOfStudents;
		
		cout<<"Enter the number of subjects ";
		cin>>nSubjects;
		
		while(counter<=nOfStudents)
		{
			subject=1;
			marks=0;
			cout<<"Enter the marks of "<<counter<<"students";
			while(marks!=-999)
			{
				b:
					cin>>marks;
					
					if(subject<nSubjects && marks==-999)
					{
						cout<<"You have not enter the marks of "<<nSubjects<<"Please re-enter subjects"<<endl;
						goto b;
					}
										
					if(marks==-100 || (!cin))
					{
						cout<<"Enter Y/N=";
						cin>>ch;
						
						if(ch=='Y'||ch=='y')
						goto a;
						
						else 
						goto stop;
					}
					
					subject++;
					
					if(marks!=-999)
						sum+=marks;
					
			}
					
					counter++;
		}
			stop:
				cout<<"Program is terminated";
				avg=sum/counter;
				
				cout<<"Number of students= "<<nOfStudents<<endl<<"Number of subjects= "<<nSubjects<<endl;
				cout<<fixed<<showpoint<<setprecision(2);
				cout<<"Average of students= "<<avg;
				
				return 0;
}

