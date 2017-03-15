#include <iostream>
#include <cstring>

template <typename T>
T maxn(const T ar[], int n);

const char * maxn(const char * ar[], int n);

int main()
{
	using namespace std;
	int ar1[6];
	double ar2[4];
	char ar3[5][50];
	int i;

	cout << "Enter 6 integers:\n";
	for (i = 0; i < 6; i++)
		cin >> ar1[i];
	cout << "Maximum: " << maxn(ar1, 6);

	cout << "Enter 4 doubles:\n";
	for (i = 0; i < 4; i++)
		cin >> ar2[i];
	cout << "Maximum: " << maxn(ar2, 6);

	cout << "Enter 5 strings, each string ends with \'n\'"
		<< "and should have up to 49 characters:\n";
	for (i = 0; i < 5; i++)
		cin.getline(ar3[i], 50);
	cout << "Longest string: " << maxn(ar3, 5);

	return 0;
}

template <typename T>
T maxn(const T ar[], int n)
{
	T result = ar[0];
	for (int i = 0; i < n; i++)
		if (ar[i] > result)
			result = ar[i];
	return result;
}

const char * maxn(const char * ar[], int n)
{
	int len;
	int max = 0;
	const char * result;
	for (int i = 0; i < n; i++)
	{
		len = std::strlen(ar[i]);
		if (len > max)
		{
			max = len;
			result = ar[i];
		}
	}
	return result;
}