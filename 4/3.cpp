#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	
	char first[20], last[20];
	char combined[40];
	
	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your last name: ";
	cin >> last;
	strcpy(combined, last);
	strcat(combined, ", ");
	strcat(combined, first);
	
	cout << "Here's the information in a single string: ";
	cout << combined << endl;
	
	return 0;
}
