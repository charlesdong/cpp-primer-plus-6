#include "golf.h"
#include <cstring>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::strlen;

void setgolf(golf & g, const char * name, int hc)
{
	std::strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g)
{
	using std::cout;
	using std::cin;

	cout << "Enter the golfer's name (empty string or too long string to quit): ";
	cin.getline(g.fullname, Len);
	cout << "Enter the golfer's handicap: ";
	cin >> g.handicap;

	// actually the requirements in the book is
	// return 1 if name is entered, 0 if name is empty string
	// but here I changed a bit
	// and when the array is full 0 is also returned
	return strlen(g.fullname) != 0 && strlen(g.fullname) < Len - 1;
}

void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	cout << "Name: " << g.fullname
		<< "Handicap: " << g.handicap
		<< endl;
}
