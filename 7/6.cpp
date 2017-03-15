#include <iostream>
using namespace std;

unsigned fill_array(double ar[], unsigned n);
void show_array(const double ar[], unsigned n);
void reverse_array(double ar[], unsigned n);

int main()
{
	cout << "Enter the value of n: ";
	unsigned n;
	cin >> n;
	double * ar = new double[n];
	n = fill_array(ar, n);
	show_array(ar, n);
	reverse_array(ar, n);
	cout << "After reversing:\n";
	show_array(ar, n);
	delete [] ar;
	return 0;
}

unsigned fill_array(double ar[], unsigned n)
{
	cout << "Enter a list of values (the number of values should <= n):\n";
	unsigned i;
	for (i = 0; i < n; i++)
	{
		if (!(cin >> ar[i]))
			break;
	}
	if (cin.fail())
		cin.clear();
	return i;
}

void show_array(const double ar[], unsigned n)
{
	cout << "Elements in array:\n";
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
	cout << endl;
}

void reverse_array(double ar[], unsigned n)
{
	unsigned i, j;
	double temp;
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = ar[j];
		ar[j] = ar[i];
		ar[i] = temp;
	}
}