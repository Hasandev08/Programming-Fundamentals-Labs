#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int harddisk[10], backup[10], n;
	
	for(int i=0; i<10; i++)
	{
		cout<<"Enter digit to be stored "<<i+1<<": ";
		cin>>harddisk[i];
		cout<<endl;
		
	}
	
	for(int j=0; j<10; j++)
	{
		backup[j]=harddisk[j];
	}
	
	cout<<"Enter number of hard disks the are corrupted"<<endl;
	cin>>n;
	
	cout<<"The digit retireved from back up"<<n<<"is"<<backup[n-1]<<endl;
	
	harddisk[n-1]=-1;
	
	cout<<"The value stored in corrupted hard disk number"<<n<<"is"<<harddisk[n-1]<<endl;
	
	return 0;
	
}
