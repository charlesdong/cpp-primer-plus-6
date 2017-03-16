#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string str_to_upper(const string & str);

int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	getline(cin, str);
	while (str != "q")
	{
		cout << str_to_upper(str);
		cout << "Next string (q to quit): ";
		getline(cin, str);
	}
	return 0;
}

string str_to_upper(const string & str)
{
	string result;
	for (int i = 0; i < str.size(); i++)
		result[i] = toupper(str[i]);
	// Another version:
	// for (char ch : str)
	//     result[i] = toupper(ch);
	return result;
}
