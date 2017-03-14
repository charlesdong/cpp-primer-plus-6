#include <iostream>
#include <fstream>
#include <cstring>
int main()
{
	using namespace std;

	ifstream fin;
	int count = 0;

	fin.open("text.txt");	// "text.txt" should be replaced with the actual text file name
	if (!fin.is_open())
	{
		cout << "Cannot open file\n";
		exit(EXIT_FAILURE);	// same as return 1;
	}

	fin.get();
	while (!fin.eof())
	{
		fin.get();
		count++;
	}
	fin.close();

	cout << "The text file contains " << count << " characters\n";
	return 0;
}