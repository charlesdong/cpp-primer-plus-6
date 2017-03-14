#include <iostream>

int factorial(int n);

int main()
{
	using namespace std;
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << "n! = " << factorial(n) << endl;
	return 0;
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}