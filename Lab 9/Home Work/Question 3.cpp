#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
srand(time(0));
int a[99],f[99],sum=0,n=9,j,i,count;
 for(int i=0;i<99;i++)
 {
  a[i]=1+rand()%9;
  sum+=a[i];
}
    cout<<"*******\nMean:\n*******\n";
    cout<<"the mean is avg value of data items\ntotal items devided by all no of data: ";
cout<<sum<<"/"<<99<<" = "<<sum/99.00;
cout<<"\nThe unsorted arry is:\n";
for(int i=0;i<99;i++)
{
cout<<a[i]<<" ";
if(i==n)
{
cout<<endl;
n+=10;}}

for(int i=0;i<99;i++)
{
  for(int j=i+1;j<99;j++)
{
if(a[i]>a[j])
{
int temp=a[i];
a[i]=a[j];
a[j]=temp;

}
}}
n=9;
cout<<"\nThe sorted arry is:\n";
for(int i=0;i<99;i++)
{

cout<<a[i]<<" ";
if(i==n)
{
cout<<endl;
n+=10;
}
 }

    cout<<"\n*******\nMedian\n*******\n";
cout<<"The median of the arry :";
int m=(99+1)/2;
cout<<a[m];
     for(i=0; i<99; i++)
{
count = 1;
for(j=i+1; j<99; j++)
{
if(a[i]==a[j])
{
count++;
f[j] = 0;
}
}

if(f[i] != 0)
{
f[i] = count;
}
}

cout << "\n********\n Mode\n********\n";
cout<<"Response\tFrequency\tHistogram\n";
for(i=0; i<99; i++)
{
if(f[i] != 0)
{
cout<<a[i]<<"\t\t"<<f[i]<<"\t\t";
for(int k=1;k<=f[i];k++)
cout<<"*";
cout<<endl;
}
}
}
