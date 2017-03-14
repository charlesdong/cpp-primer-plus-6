#include <iostream>

struct Patron
{
	char name[30];
	double donation;
};

int main()
{
	using namespace std;
	int n;
	cout << "Enter the number of patrons: ";
	cin >> n;
	Patron * patrons = new Patron[n];
	int i;
	int grand_patrons = 0;
	for (i = 0; i < n; i++)
	{
		cout << "Enter the name of patron " << (i + 1) << ": ";
		cin.getline(patrons[i].name, 30);
		cout << "Enter the donation of patron " << (i + 1) << ": ";
		cin >> patrons[i].donation;
		if (patrons[i].donation > 10000.0)
			grand_patrons++;
	}
	cout << "Grand Patrons:\n";
	if (grand_patrons == 0)
		cout << "none\n";
	else
		for (i = 0; i < n; i++)
			if (patrons[i].donation > 10000.0)
				cout << "Name: " << patrons[i].name
				     << ", donation: " << patrons[i].donation << endl;
	cout << "Patrons:\n";
	if (grand_patrons == n)
		cout << "none\n";
	else
		for (i = 0; i < n; i++)
			if (patrons[i].donation <= 10000.0)
				cout << "Name: " << patrons[i].name
				     << ", donation: " << patrons[i].donation << endl;
	return 0;
}