#include<iostream>

using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter the value of n= "<<endl; 
    cin>>n;

  if(n<=0)
   {
      cout<<"Invalid value of n";
   }
   else
   {
      int i=1;
     
	 while(i<=n)
	 {
	 sum=sum+i;
	 i++;
     }
     cout<<"Sum of first n natural numbers is: "<<sum;
   }

   return 0;
}
