#include <iostream>
#include <array>
const int ArSize = 101;
int main()
{
	using namespace std;
	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1.0L;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i-1];
	// will print the factorials of 0 to 100
	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials[i] << endl;
	return 0;
}