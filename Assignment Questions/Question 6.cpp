#include <iostream>
#include <cstring>
using namespace std;

const int MAX_PRODUCTS = 10;
void add(char name[][50], int quant[], int& count) { //function to add products to the inventory
    if (count<MAX_PRODUCTS) {
        char names[50];
        int quants;
        cout << "Enter the name of the product: ";
        cin >> names;
        cout << "Enter the quantity of " <<names<< "(s) to add: ";
        cin >> quants;
        int index=-1;         // Check to see if the product is already in the inventory
        for (int i=0; i<count; i++) {
            if (strcmp(name[i],names) == 0) {
                index=i;
                break;
            }
        }
        if (index!=-1) {       // If the product exists, update it's quantity
            quant[index] += quants;
        } else {
            strcpy(name[count], names);    // If the product doesn't exist add it to the inventory
            quant[count]=quants;
            ++count;
        }
        cout <<quants<< " " <<names<< "(s) have been added to the inventory." <<endl;
    } else {
        cout << "Error: Inventory is full." << endl;
    }
}
void remove(char name[][50], int quant[], int& count) {  // function to remove products from the inventory
    char names[50];
    int quants;
    cout << "Enter the name of the product: ";
    cin >> names;
    cout << "Enter the quantity to remove: ";
    cin >> quants;
    int index=-1;        // Check to see if the product is in the inventory already
    for (int i=0; i<count; i++) {
        if (strcmp(name[i], names)==0) {
            index=i;
            break;
        }
    }
    if (index!=-1) {      // Product is found in the inventory
        if (quant[index] >= quants) {
            quant[index] -= quants;
            cout <<quants<< " " <<names<< "(s) removed from the inventory." <<endl;
            if (quant[index] ==0) {        // If the quantity becomes zero, remove it from the list
                for (int i=index; i<count-1; i++) {
                    strcpy(name[i], name[i+1]);
                    quant[i] = quant[i+1];
                }
                --count;
            }
        } else {
            cout << "Error: Not enough stock of " <<names<< endl;
        }
    } else {
        cout << "Error: Product was not found in the inventory." <<endl;
    }
}
void check(const char name[][50], const int quant[], const int& count) { // Function to check the stock of a specific product
    char names[50];

    cout << "Enter the product name: "; // check if the product is in the inventory
    cin >> names;
    int index = -1;
    for (int i = 0; i < count; ++i) {
        if (strcmp(name[i], names) == 0) {
            index = i;
            break;
        }
    }

    if (index != -1) {   // check if product is found in the inventory
        cout << "Current stock of " <<names<< ": " << quant[index] << " units." << endl;
    } else {
        cout << "Error: Product not found in the inventory." << endl;
    }
}
void display(const char name[][50], const int quant[], const int& count) { //function to display the inventory
    cout << "\n------------------------\n";
    cout << "Current Inventory:" << endl;
    for (int i=0; i<count; i++) {
        cout <<name[i] <<": " <<quant[i]<< " units" <<endl;
    }
    cout << "------------------------\n";
}
int main() {
    char name[MAX_PRODUCTS][50];
    int quant[MAX_PRODUCTS];
    int count=0;
    while (true) {
        cout << "\n1. Add Product\n2. Remove Product\n3. Check Stock\n4. Display Inventory\n5. Exit\n";
        int choice;
        cout<<"Enter your choice (1-5): ";
        cin>>choice;
        switch (choice) {
            case 1:
                add(name, quant, count);
                break;
            case 2:
                remove(name, quant, count);
                break;
            case 3:
                check(name, quant, count);
                break;
            case 4:
                display(name, quant, count);
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 5." << endl;
        }
    }
    return 0;
}



