#include<iostream>
using namespace std;
int main()
{
	int a[10],max1,max2,max3,i,in1,in2;
	
	cout<<"Enter 10 numbers: ";
	
	for(i=0 ;i<10;i++)
	{
		cin>>a[i];
	}
	
	max1=a[0];
	max2=max1;
	max3=max1;
	
	for(i=0 ; i<10 ; i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
			in1=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1)
		continue;
		
		if(a[i]>max2)
		{
			max2=a[i];
			in2=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2)
		continue;
		
		if(a[i]>max3)
		max3=a[i];
	}
	
	cout<<"The first largest Number is: "<<max1<<endl;
	cout<<"The second largest Number is: "<<max2<<endl;
	cout<<"The third largest Number is: "<<max3<<endl;

	return 0;
}

