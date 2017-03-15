#include <iostream>
const int Max = 5;

double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end);
void revalue(double r, double * begin, double * end);

int main()
{
	using namespace std;
	double properties[Max];

	double * end = fill_array(properties, properties + Max - 1);
	show_array(properties, end);
	if (end > properties)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double * begin, double * end)
{
	using namespace std;
	double temp;
	double * pd;
	for (pd = begin; pd <= end; pd++)
	{
		cout << "Enter value #" << (pd - begin + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0)
			break;
		*pd = temp;
	}
	return pd - 1;
}

void show_array(const double * begin, const double * end)
{
	using namespace std;
	for (const double * pd = begin; pd <= end; pd++)
	{
		cout << "Property #" << (pd - begin + 1) << ": $";
		cout << *pd << endl;
	}
}

void revalue(double r, double * begin, double * end)
{
	for (double * pd = begin; pd <= end; pd++)
		*pd *= r;
}