#include <iostream>
int main()
{
	using namespace std;
	long long a, b;
	cout << "Enter the world's population: ";
	cin >> a;
	cout << "Enter the population of the US: ";
	cin >> b;
	cout << "The population of the US is " << double(b)/double(a)*100.0 << "% of the world population.\n";
	return 0;
}
