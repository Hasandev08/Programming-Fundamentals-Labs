#include <iostream>

using  namespace std ;
int main()
{
    int n1, n2, i, gcd;
    
	cout << "Enter two integers:  \n" ;
    cout <<"ENTER THE VALUE OF n1 : ";
	cin >> n1 ;
	cout <<"ENTER THE VALUE OF n2 : ";
	cin >> n2 ;
    
	for(i=1; i <= n1 && i <= n2; ++i)
    {
    
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    	cout << "G.C.D of n1 and n2 is :" << n1 << n2 << gcd ;
    
	return 0;

}
