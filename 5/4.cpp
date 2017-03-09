#include <iostream>
int main()
{
	using namespace std;
	double daphne = 100.0;
	double cleo = 100.0;
	int i;
	for (i = 1; daphne <= cleo; i++)
	{
		daphne += 0.10 * 100.0;
		cleo *= 1.05;
	}
	cout << "After " << (i - 1) << " years, Cleo has more investment value than Daphne.\n";
	cout << "Daphne: " << daphne << ", Cleo: " << cleo << endl;
	return 0;
}