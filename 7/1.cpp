#include <iostream>

double hmean(double x, double y);

int main()
{
	using namespace std;
	double x, y;
	cout << "Enter two values: ";
	cin >> x >> y;
	while (x != 0 && y != 0)
	{
		cout << "Harmonic mean of " << x << " and " << y
		     << " is " << hmean(x, y) << endl;
	}
	cout << "Bye!\n";
	return 0;
}

double hmean(double x, double y)
{
	return 2.0 * x * y / (x + y);
}
