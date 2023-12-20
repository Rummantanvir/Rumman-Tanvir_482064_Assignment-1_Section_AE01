#include <iostream>
using namespace std;
int is_prime(int a)
{
	int c=0;
	for (int i = 1; i < a; i++)
	{
		if (a % i == 0)
			c++;
	}
	if (c<=1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int N, x = 0, temp=0;
	cout << "Enter an integer: ";
	cin >> N;
	while (x<=N)
	{
		if (is_prime(x) == 1)
			temp = x;
		x++;
	}
	cout << "The largest prime number up to " <<N<< " is: " << temp << endl;
	return 0;
}


