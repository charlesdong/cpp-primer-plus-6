#include <iostream>
#include <array>
int main()
{
	using namespace std;
	cout << "Enter your three 40-yard runnings' scores: ";
	array<double, 3> scores;
	cin >> scores[0] >> scores[1] >> scores[2];
	cout << "Average: " << (scores[0] + scores[1] + scores[2]) / 3.0 << endl;
	return 0;
}
