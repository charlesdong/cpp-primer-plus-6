#include <iostream>
long double probability(unsigned n1, unsigned p1, unsigned n2, unsigned p2);
int main()
{
	using namespace std;
	// t1, t2: total, c1, c2: choices
	double t1, c1, t2, c2;
	cout << "Enter the total number of choices of field numbers,\n"
		<< "the number of picks of field numbers allowed,\n"
		<< "the total number of choices of special numbers,\n"
		<< "and the number of picks of special numbers allowed:\n";
	while ((cin >> t1 >> c1 >> t2 >> c2) && c1 <= t1 && c2 <= t2)
	{
		cout << "You have one chance in " << probability(t1, c1, t2, c2)
			<< " of winning\n";
		cout << "Next four numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

// n1, n2 is the total number of choices of field numbers and special numbers,
// p1, p2 is the number of picks allowed of field numbers and special numbers
long double probability(unsigned n1, unsigned p1, unsigned n2, unsigned p2)
{
	long double result = 1.0;
	unsigned n, p;

	for (n = n1, p = p1; p > 0; n--, p--)
		result *= n / p;
	for (n = n2, p = p2; p > 0; n--, p--)
		result *= n / p;

	return result;
}