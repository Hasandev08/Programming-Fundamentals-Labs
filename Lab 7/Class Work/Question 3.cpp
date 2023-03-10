#include<iostream>
using namespace std;

int main()
{
	int arr[10], V, i;

	cout << "Enter the elements of array " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	cout << "Enter the value to be added in the array " << endl;
	cin >> V;

	cout << "Enter the index at which the value should be added " << endl;
	cin >> i;
	cout << endl;

	for (int j = 10; j > V; j--)
	{
		arr[j] = arr[j - 1];
	}

	arr[i] = V;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}
