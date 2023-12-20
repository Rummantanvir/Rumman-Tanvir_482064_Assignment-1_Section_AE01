#include <iostream>
using namespace std;
int main()
{
	int arr[6], temp;
	for (int i=0; i<6; i++)
	{
		cout << "Please enter element ["<<i<<"]: ";
		cin >> arr[i];
	}
	cout << "\nThe original array is: ";
	for (int i=0; i<6; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i=0; i<6; i++)
	{
		for (int j=0; j<5; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout <<endl;
	cout << "\nThe sorted array is: ";
	for (int i=0; i<6; i++)
	{
		cout <<arr[i]<< " ";
	}
	return 0;
}



