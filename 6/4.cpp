#include <iostream>

const int STRSIZE = 30;
const int MEMBERS = 5;
enum {FULLNAME, TITLE, BOPNAME};

struct bop
{
	char fullname[STRSIZE];
	char title[STRSIZE];
	char bopname[STRSIZE];
	int preference;
};

int main()
{
	using namespace std;

	bop members[MEMBERS] = 
	{
		{"Wimp Macho", "Game Designer", "WIMPY", FULLNAME},
		{"Raki Rhodes", "Junior Programmer", "RAR", TITLE},
		{"Celia Laiter", "Operation Engineer", "MIPS", BOPNAME},
		{"Hoppy Hipman", "Analyst Trainee", "HAHA", TITLE},
		{"Pat Hand", "Code Analyst", "LOOPY", BOPNAME}
	};
	char choice;
	int i;

	cout << "Benevolent Order of Programmers Report\n"
	     << "a. display by name	b. display by title\n"
	     << "c. display by bopname	d. display by preference\n"
	     << "q. quit\n";

	cout << "Enter your choice: ";
	cin.get(choice);
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a':
			for (i = 0; i < MEMBERS; i++)
				cout << members[i].fullname << endl;
			break;
		case 'b':
			for (i = 0; i < MEMBERS; i++)
				cout << members[i].title << endl;
			break;
		case 'c':
			for (i = 0; i < MEMBERS; i++)
				cout << members[i].bopname << endl;
			break;
		case 'd':
			for (i = 0; i < MEMBERS; i++)
				switch (members[i].preference)
				{
				case FULLNAME:
					cout << members[i].fullname << endl;
					break;
				case TITLE:
					cout << members[i].title << endl;
					break;
				case BOPNAME:
					cout << members[i].bopname << endl;
					break;
				}
			break;
		}
	}
	cout << "Bye!\n";
	return 0;
}