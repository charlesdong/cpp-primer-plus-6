#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string first, last, combined;

	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your last name: ";
	cin >> last;

	combined = last + ", " + first;
	cout << "Here's the information in a single string: ";
	cout << combined << endl;

	return 0;
}