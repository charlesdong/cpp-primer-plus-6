#include <iostream>
const int MAX = 5;

template <typename T>
T max5(const T ar[]);

int main()
{
	using namespace std;
	int ar1[MAX];
	double ar2[MAX];
	int i;

	cout << "Enter a list of integer values:\n";
	for (i = 0; i < MAX; i++)
		cin >> ar1[i];
	cout << "Maximum: " << max5(ar1) << endl;

	cout << "Enter a list of double values:\n";
	for (i = 0; i < MAX; i++)
		cin >> ar2[i];
	cout << "Maximum: " << max5(ar2) << endl;

	return 0;
}

template <typename T>
T max5(const T ar[])
{
	T result = ar[0];
	for (int i = 0; i < MAX; i++)
		if (ar[i] > result)
			result = ar[i];
	return result;
}