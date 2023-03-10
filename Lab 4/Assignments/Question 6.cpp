#include<iostream>
#include<string>

using namespace std;
int main()
{
	string str;
	
	cout<<"Enter the area of lahore"<<endl;
	cin>>str;
	
	if(str=="DHA")
		cout<<"AQI= 206\n very healthy "<<endl;
		
	else if(str=="BAHRIA TOWN")
		cout<<"AQI=151\n unhealthy"<<endl;
		
	else if(str=="MODEL TOWN"||"MODEL TOWN")
		cout<<"AQI=195\n unhealthy"<<endl;
		
	else if(str=="JOHAR TOWN"||"JOHAR TOWN")
		cout<<"AQI=190\n unhealthy"<<endl;
		
	else if(str=="IQBAL TOWN"||"IQBAL TOWN")
		cout<<"AQI=250\n Hazerdous"<<endl;
		
	else if(str=="SHADRAH")
		cout<<"AQI=270\n Hazerdous"<<endl;
		
	else if(str=="UET"||"U.E.T")
		cout<<"AQI=265\n Hazerdous"<<endl;
		
	return 0;							
}
