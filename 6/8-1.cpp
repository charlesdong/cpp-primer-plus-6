// a simpler version of 8.cpp, but knowledge from chapter 17 is required
#include <iostream>
#include <fstream>
int main()
{
	using namespace std;
	ifstream fin("text.txt");	// "text.txt" should be replaced with the actual text file name
	fin.seekg(0, ios_base::end);
	cout << "The text file contains " << fin.tellg() << " characters\n";
	fin.close();
	return 0;
}