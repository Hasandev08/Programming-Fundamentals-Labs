#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int hours,mints;
	float speed1,speed2,dist1,dist2,totalhours,totaldist;
	
	cout<<"elapsed time=";
	cin>>hours>>mints;
	
	totalhours=hours+(mints/60);
	
	cout<<"average speeds=";
	cin>>speed1>>speed2;
	
	dist1=speed1*totalhours;
	dist2=speed2*totalhours;
	
	totaldist=sqrt((dist1*dist1)+(dist2*dist2));
	
	cout<<"shortest dist between the cars="<<totaldist<<"m"<<endl;
	return 0;
}
