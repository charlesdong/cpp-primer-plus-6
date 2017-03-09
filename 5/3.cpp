#include <iostream>
int main()
{
	using namespace std;
	double x;
	double sum = 0;
	cin >> x;
	while (x != 0.0)
	{
		sum += x;
		cout << "Sum: " << sum << endl;
		cin >> x;
	}
	return 0;
}