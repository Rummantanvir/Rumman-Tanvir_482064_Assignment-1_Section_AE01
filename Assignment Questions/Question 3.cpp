#include <iostream>
using namespace std;

int main() {
    int a[10] = {1,2,3,4,5}; 
    int x;

    cout <<"Enter the number of elements you want to add: ";
    cin >> x;
    
    if (x>10) {
        cout << "Cannot add more than 10 elements." << endl;
        return 0;
    }
	for (int i=5; i<x+5; i++)
	{
		cout << "Please enter element ["<<i<<"]: ";
		cin >> a[i];
	}    
    cout << "The elements in the new array are:" << endl;
    for (int i=0; i<x+5; i++) {
        cout <<a[i]<< " ";
    }
    cout << endl;
    return 0;
}





