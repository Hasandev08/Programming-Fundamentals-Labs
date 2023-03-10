#include <iostream>
    
using namespace std;
int main()
    {
        int n,i;
        cout << "Enter a positive integer: "<<endl;
        cin >> n;
        
		while (i < 10)
		{
			++i;
            cout << n << " * " << i << " = " << n * i << endl;
        }
        
        return 0;
    }
