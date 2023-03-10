#include<iostream>
using namespace std;

int add(int w,int x,int y,int z,int e,int f,int l)
{
	cout<<"addition = "<<w<<"/"<<x<<"+"<<y<<"/"<<z<<"="<<e+f<<"/"<<l<<endl;
	int u=l;
 	int k=e+f;
	
	while(k!=l)
	{
		if(k>l)
		k=k-l;
		
		else
		l=l-k;
    }
               
        cout<<"Lowest fraction is ="<<(e+f)/k<<"/"<<u/k;
}
              
int sub(int w,int x,int y,int z,int e,int f,int l)
{
	 cout<<"subtraction = "<<w<<"/"<<x<<"-"<<y<<"/"<<z<<"="<<e-f<<"/"<<l<<endl;
	int u=l;
	int k=e-f;
	
	if(k<0)
	k=k*(-1);
			
	while(k!=l)
	{
		if(k>l)
		k=k-l;
			
		else
		l=l-k;
    }
               
	cout<<"Lowest fraction is ="<<(e-f)/k<<"/"<<u/k;
}
			
int multiply(int w,int x,int y,int z)
{
	cout<<"multiplication = "<<w<<"/"<<x<<"*"<<y<<"/"<<z<<"="<<w*y<<"/"<<z*x<<endl;
	int u=w*y;
	int v=z*x;
		    
	while(u!=v)
	 {
		if(u>v)
		u=u-v;
		    	
		else
		v=v-u;
	}
               
	cout<<"Lowest fraction is ="<<(w*y)/u<<"/"<<(z*x)/u;
}

int division(int w,int x,int y,int z)
{
    cout<<"division = "<<w<<"/"<<x<<"/"<<y<<"/"<<z<<"="<<w*z<<"/"<<x*y<<endl;
    int u=w*z;
	int v=y*x;
	
	while(u!=v)
	{
		if(u>v)
		u=u-v;
		    	
		else
		v=v-u;
	}
    
	cout<<"Lowest fraction is ="<<(w*z)/u<<"/"<<(y*x)/u;
}
    
int main()

   {
		int l,a,b,c,d,r,q;
		int s,e,f,m,n,o,p;
		char ch;
     up:
	cout<<"****************************************\n";
	cout<<"welcome to the fraction calculator\n";
	cout<<"****************************************\n";
	cout<<"enter the numerater of fraction 1 =";
	cin>>m;
	cout<<"enter the denomenater of fraction 1 =";
     cin>>n;
	cout<<"enter the numerater of fraction 2 =";
     cin>>o;
    	cout<<"enter the denumenater of fraction 2 =";
     cin>>p;
     cout<<"\n";
     cout<<"please select operations\n";
	cout<<"press 1 for addition\n";
	cout<<"Press 2 for subtraction\n";
	cout<<"press 3 for multiplication\n";
	cout<<"Press 4 for division\n";
	cout<<"\n";
    cout<<"enter operator which is performed :";
    cin>>s;
	
	l=n>p?n:p;

for(l=n>p?n:p;l<=n*p;l++)
		if(l%n==0&&l%p==0)

			break;
	   		e=l/n;
	   		e=e*m;
	   		f=l/p;
	   		f=f*o;
	   
	   		if(s==1)
	   			add(m,n,o,p,e,f,l);
	   
	   		else if(s==2)
	   			sub(m,n,o,p,e,f,l);
	   
	   		else if(s==3)
	   			multiply(m,n,o,p);
	   
	   		else if(s==4)
	   			division(m,n,o,p);
     		cout<<endl;
     		
			 cout<<"enter Y for again and N for terminate:";
     		cin>>ch;
     
	 		if(ch=='y'||ch=='Y')
     		goto up;
     
	 		else if(ch=='N'||ch=='n')
			cout<<"your progam is Terminated";
	
	return 0;
}

