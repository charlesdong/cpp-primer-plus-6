#include <iostream>
int main()
{
	using namespace std;
	double donations[10];
	double sum = 0.0;
	double average;
	int i = 0;
	int count = 0;
	int above_avg = 0;

	cout << "Please enter donation values.\n";
	cout << "Enter donation #1: ";
	while (cin >> donations[i])
	{
		sum += donations[i];
		i++;
		cout << "Enter donation #" << (i+1) << ": ";
	}
	count = i;
	average = sum / count;

	for (i = 0; i < count; i++)
		if (donations[i] > average)
			above_avg++;

	cout << above_avg << " donations are higher than average.\n";
	return 0;
}