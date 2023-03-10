#include<iostream>
#include<cmath>
#include<string>
using namespace std;
const double PI=3.1416;
int main()
{
	double sphereRadius;
	double sphereVolume;
	double point1X, point1Y;
	double point2X, point2Y;
	double distance;
	
	string str;
	
	cout<<"enter radius of sphere:"<<endl;
	cin>>sphereRadius;
	
	sphereVolume=(4/3)*PI*pow(sphereRadius,3);
	cout<<"The volume of the sphere is:"<<sphereVolume<<endl;
	
	cout<<"Enter the coordinates of two points in the X-Y plane:"<<endl;
	cin>>point1X>>point1Y>>point2X>>point2Y;
	
	distance=sqrt(pow(point2X-point1X,2)+pow(point2Y-point1Y,2));
	
	cout<<"The distance between the points"<<"("<<point1X<<", "<<point1Y<< ") and"<<"("<<point2X<<", "<<point2Y<< ") is: "<<distance<<endl;
	
	str="Programming with C++";
	
	cout<<"Number of characters, "<<"including blanks, in \""<<str<<"\" is:"<<str.length()<<endl;
	
	return 0;
}
