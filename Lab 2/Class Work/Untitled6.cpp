#include<iostream>
using namespace std;
int main()
{int avg,math,sci,ara,pk,eng;
cout<<"please enter math marks"<<endl;
cin>>math;
cout<<"please enter sci marks"<<endl;
cin>>sci;
cout<<"please enter ara marks"<<endl;
cin>>ara;
cout<<"please enter pk marks"<<endl;
cin>>pk;
cout<<"please enter eng marks"<<endl;
cin>>eng;
avg=(math+sci+ara+pk+eng)/5;
cout<<avg;
return 0;
}
