#include <iostream>

using namespace std;
int main()
{
    int num1,num2,num3;
    char operation;
    
    cout << "Enter your calculation: ";
  	cin >> num1 >> operation >> num2;
  	switch (operation) 
{
        case '+':
            cout << num1 + num2 << endl;
            break;
            
        case '-':
            cout << num1 - num2 << endl;
            break;
            
        case '*':
            cout << num1 * num2 << endl;
            break;
            
        case '/':
        case '%':
        	if((num1==0) || (num2==0))
        	{
        		cout<<"Can't divide by 0:"<<endl;
        		return 1;
			}
			else
			cout<<num1/num2<<endl;
			break;
			
		case'|':
			num3=num1|num2;
			cout<<num3;
			break;
			
		case'&':
			num3=num1&num2;
			cout<<num3;
			break;
			
		case'!':
			cout<<"Enter 0 or 1"<<endl;
			cout<<"!num1="<<!num1<<endl<<"!num2="<<!num2<<endl;
			break;
			
		case'>':
			num3=num1>num2;
			cout<<"num1>num2"<<endl<<num3<<endl;
			break;
			
		case'<':
			num3=num1<num2;
			cout<<"num1<num2"<<endl<<num3<<endl;
			break;
							
        default:
            cout << "There was an error with your input" << endl;
            break;
    }
    return 0;
}

