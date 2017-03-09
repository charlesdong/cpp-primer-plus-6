#include <iostream>

const char * const Months[12] = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

int main()
{
	using namespace std;
	int volumes[12];
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter the sales volume of " << Months[i] << ": ";
		cin >> volumes[i];
	}
	int sum = 0;
	for (int i = 0; i < 12; i++)
		sum += volumes[i];
	cout << "Sum: " << sum << endl;
	return 0;
}