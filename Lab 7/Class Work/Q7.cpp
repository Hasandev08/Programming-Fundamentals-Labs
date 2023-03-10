#include<iostream>
using namespace std;
int main()
{
	int a[10],max1,max2,max3,max4,max5,max6,max7,max8,max9,max10,i,in1,in2,in3,in4,in5,in6,in7,in8,in9,in10,k;
	
	cout<<"Enter 10 numbers: ";
	
	for(i=0 ;i<10;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Which Largest Number do you want to find: ";
	cin>>k;
	
	max1=a[0];
	max2=max1;
	max3=max1;
	max4=max1;
	max5=max1;
	max6=max1;
	max7=max1;
	max8=max1;
	max9=max1;
	max10=max1;
	
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
		{
			in3=i;
			max3=a[i];
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3)
		continue;
		
		if(a[i]>max4)
		{
			max4=a[i];
			in4=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3 || i == in4)
		continue;
		
		if(a[i]>max5)
		{
			max5=a[i];
			in5=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3 || i == in4 || i == in5)
		continue;
		
		if(a[i]>max6)
		{
			max6=a[i];
			in6=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3 || i == in4 || i == in5 || i == in6)
		continue;
		
		if(a[i]>max7)
		{
			max7=a[i];
			in7=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3 || i == in3 || i == in4 || i == in5 || i == in6 || i == in7)
		continue;
		
		if(a[i]>max8)
		{
			max8=a[i];
			in8=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3 || i == in4 || i == in5 || i == in6 || i == in7 || i == in8)
		continue;
		
		if(a[i]>max9)
		{
			max9=a[i];
			in9=i;
		}
	}
	
	for(i=0 ; i<10 ; i++)
	{
		if(i==in1 || i == in2 || i == in3 || i == in4 || i == in5 || i == in6 || i == in7 || i == in8 || i == in9)
		continue;
		
		if(a[i]>max10)
		{
			max10=a[i];
			in10=i;
		}
	}
	
	
	if(k==1)
	cout<<"The first largest Number is: "<<max1<<endl;
	if(k==2)
	cout<<"The second largest Number is: "<<max2<<endl;
	if(k==3)
	cout<<"The third largest Number is: "<<max3<<endl;
	if(k==4)
	cout<<"The fourth largest Number is: "<<max3<<endl;
	if(k==5)
	cout<<"The fifth largest Number is: "<<max3<<endl;
	if(k==6)
	cout<<"The sixth largest Number is: "<<max3<<endl;
	if(k==7)
	cout<<"The seventh largest Number is: "<<max3<<endl;
	if(k==8)
	cout<<"The eighth largest Number is: "<<max3<<endl;
	if(k==9)
	cout<<"The ninth largest Number is: "<<max3<<endl;
	if(k==10)
	cout<<"The tenth largest Number is: "<<max3<<endl;
	
	return 0;
}

