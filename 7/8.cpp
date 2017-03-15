#include <iostream>
struct Expenses
{
	double data[Seasons];
};
const int Seasons = 4;
const char * Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(double * pd);
void show(const double * pd);
void fill_s(Expenses * pe);
void show_s(const Expenses * pe);

int main()
{
	double expenses[Seasons];
	Expenses expenses_s;
	cout << "Test 1: using a double array:\n";
	fill(&expenses);
	show(&expenses);
	cout << "Test 2: using an Expenses structure:\n";
	fill_s(&expenses_s);
	show_s(&expenses_s);
	return 0;
}

void fill(double * pd)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pd[i];
	}
}

void show(const double * pd)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << pd[i] << endl;
		total += pd[i];
	}
	cout << "Total Expenses: $" << total << endl;
}

void fill_s(Expenses * pe)
{
	using namespace std;
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pe->data[i];
	}
}

void show_s(const Expenses * pe)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << pe->data[i] << endl;
		total += pe->data[i];
	}
	cout << "Total Expenses: $" << total << endl;
}