#include<iostream>
using namespace std;

int dotproduct(int array1[3],int array2[3])
{
	int i,j,sum=0;
	int pro;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			pro=array1[i]*array2[j];
		}
		
		sum+=pro;
	}
	
	return sum;
}

int main()
{
	int array1[3],array2[3];
	int i,k;
	cout<<"Enter the value of vector1 = "<<endl;
	for(i=0;i<3;i++)
	{
		cin>>array1[i];
		
	}
	cout<<"Enter the value of vector2 = "<<endl;
	for(i=0;i<3;i++)
	{
		cin>>array2[i];
	}
	
	k=dotproduct(array1,array2);
	cout<<"Dot product is = "<<k;
	
	return 0;
}
