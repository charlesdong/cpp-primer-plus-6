#include <iostream>

double add(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*pf)(double, double));

int main()
{
	using namespace std;
	cout << "Enter a pair of numbers (non-digit characters to quit): ";
	double x, y;
	while (cin >> x >> y)
	{
		cout << "Sum: " << calculate(x, y, add) << endl;
		cout << "Product: " << calculate(x, y, multiply) << endl;
		cout << "Enter next pair of numbers: ";
	}
	cout << "Done!\n";
	return 0;
}

double add(double x, double y)
{
	return x + y;
}

double multiply(double x, double y)
{
	return x * y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
	return (*pf)(x, y);
	// note: the following syntax is also acceptable:
	// return pf(x, y);
}