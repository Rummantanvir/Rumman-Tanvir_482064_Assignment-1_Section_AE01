#include <iostream>
#include <string>
using namespace std;
int main()
{
	string x1, x2;
    cout << "Enter the first word: ";
    cin >> x1;
    cout << "Enter the second word: ";
    cin >> x2;
    
    if (x1==x2)
	{
        int l=x1.length();
        
        for (int i=0; i< l/2; i++)
		{
            char temp = x1[i];
            x1[i] = x1[l-i-1];
            x1[l-i-1] = temp;
        }
        cout <<"The reversed word is: " <<x1<<endl;
    } else {
        cout << "The words are not equal." <<endl;
    }
    return 0;
}






