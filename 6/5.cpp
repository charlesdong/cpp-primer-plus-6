#include <iostream>

double min(double a, double b);

int main()
{
	double income;
	double tax;
	cout << "Enter your income in tvarps (enter non-digit character or negative number to quit): ";
	while (cin >> income && income >= 0)
	{
		tax = 0.0;
		if (income <= 15000.0)
			tax += min(income - 5000.0, 15000.0 - 5000.0) * 0.10;
		if (income <= 35000.0)
			tax += min(income - 15000.0, 35000.0 - 15000.0) * 0.15;
		if (income > 35000.0)
			tax += (income - 35000.0) * 0.20;
		cout << "Tax: " << tax << " tvarps\n";
		cout << "Enter your income in tvarps (enter non-digit character or negative number to quit): ";
	}
	cout << "Bye!\n";
	return 0;
}

double min(double a, double b)
{
	return a < b ? a : b;
}