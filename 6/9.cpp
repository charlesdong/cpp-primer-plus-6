#include <iostream>
#include <fstream>
#include <cstdlib>

struct Patron
{
	char name[30];
	double donation;
};

int main()
{
	using namespace std;
	int num;
	Patron patron;
	ifstream fin;

	fin.open("patrons.txt");	// replace "patrons.txt" with your text file name
	if (!fin.is_open())
	{
		cout << "Cannot open file\n";
		exit(EXIT_FAILURE);	// same as return 1;
	}

	fin >> num;
	for (int i = 0; i < num; i++)
	{
		fin.getline(patron.name, 30);
		fin >> patron.donation;
		cout << "Name: " << patron.name << ", donation: " << patron.donation << endl;
	}

	fin.close();
	return 0;
}