#include<iostream>
using namespace std;
int main()
{
	double length,treeSpace,radius,occupiedSpace,trees,area;
	const double PI=3.14;
	
	cout<<"enter length"<<endl;
	cin>>length;
	cout<<"enter radius"<<endl;
	cin>>radius;
	cout<<"enter space for trees"<<endl;
	cin>>treeSpace;
	
	area=length*length;
	
	trees=(area)/(PI*radius*radius+treeSpace);
	cout<<"number of trees="<<trees<<endl;
	
	occupiedSpace=trees*treeSpace;
	cout<<"totalspace occupied="<<occupiedSpace;
	
	return 0;
}
