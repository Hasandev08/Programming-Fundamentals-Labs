#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int mass1,mass2,mass,distance,dist;
	double force;
	const double K=6.67*pow(10,-11);
	
	cout<<"please enter mass1"<<endl;
	cin>>mass1;
	
	cout<<"please enter mass2"<<endl;
	cin>>mass2;
	
	cout<<"please enter dist"<<endl;
	cin>>dist;
	
	mass=mass1*mass2;
	cout<<mass<<endl;
	
	distance=dist*dist;
	cout<<distance<<endl;
	
	force=(K*mass/distance);
	cout<<force;
	
	return 0;
	
}
