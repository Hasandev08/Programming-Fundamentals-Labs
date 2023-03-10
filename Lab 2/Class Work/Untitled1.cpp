#include <iostream>
using namespace std;
int main()
{int bs,gs;
double ma,hr;
cout<<"please enter basic salary"<<endl;
cin>>bs;
ma=0.15*bs;
hr=0.25*bs;
gs=bs-ma-hr;
cout<<gs;
return 0;
}
