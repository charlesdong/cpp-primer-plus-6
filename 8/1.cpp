#include <iostream>
void printstr(const char * s, int n = 1);

int main()
{
	using namespace std;
	printstr("I love GitHub");
	printstr("I know C++", 3);
	char str[100];
	int times;
	cout << "Enter a string (up to 99 chars):\n";
	cin.getline(str, 100);
	cout << "Enter a number as the times the string will be displayed:\n";
	cin >> times;
	printstr(str, times);
	return 0;
}

void printstr(const char * s, int n)
{
	for (int i = 0; i < n; i++)
		std::cout << s << std::endl;
}
