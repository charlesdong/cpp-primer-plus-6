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
	int volumes[3][12];
	for (int i = 0; i < 3; i++)
	{
		cout << "Please enter the sales volumes of year " << i << endl << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << "Enter the sales volume of " << Months[j] << ": ";
			cin >> volumes[i][j];
		}
	}
	int sum = 0.0;
	int total = 0.0;
	for (int i = 0; i < 3; i++)
	{
		sum = 0.0;
		for (int j = 0; j < 12; j++)
			sum += volumes[i][j];
		total += sum;
		cout << "Sales volume of year " << i << " is " << sum << endl;
	}
	cout << "Sales volume of the 3 years: " << total << endl;
	return 0;
}