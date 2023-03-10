#include <iostream>

using namespace std;
int main()
{
    int populationA, populationB, year = 1; 
    double growth_rateA, growth_rateB; 

    cout << "Enter the population of town A "<<endl;
    cin >> populationA;
    
    cout<<"Enter the growth rate of A "<<endl;
	cin>> growth_rateA;
	 
    cout << "Enter the population of Town B: "<<endl;
    cin >> populationB; 

    if (populationA < populationB && growth_rateA > growth_rateB)
    {
        {   
        do 
		{
                (populationA = ((growth_rateA / 100) * populationA) + populationA); 
                (populationB = ((growth_rateB / 100) * populationB) + populationB);
                year++;
        }

            while (populationA < populationB);

            cout << "Town A will surpass Town B in population after " << year << " years.\n" << endl;
            cout << "The final population of Town A is: " << populationA << ".\n" << endl;
            cout << "The final population of Town B is: " << populationB << ".\n" << endl;
        }
    }
    else
    {
        cout << "Invalid Data.";
    }

    system("pause");
    return 0;
}
