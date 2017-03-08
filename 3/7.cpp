#include <iostream>
int main()
{
	using namespace std;
	double fe;
	cout << "Enter your car's fuel economy (L/100km): ";
	cin >> fe;
	fe = 1.0 / fe * 100.0;	// km/L
	fe = fe * 0.6214;			// mile/L
	fe = fe * 3.875;			// mile/gallon
	cout << "Your fuel economy (in MPG): " << fe << endl;
	return 0;
}
