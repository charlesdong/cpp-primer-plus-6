#include <iostream>
#include <cctype>
int main()
{
	using namespace std;
	cout << "Enter words:\n";
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (!isdigit(ch))
		{
			if (isupper(ch))
				ch = tolower(ch);
			else if (islower(ch))
				ch = toupper(ch);
			cout << ch;
		}
		cin.get(ch);
	}
	return 0;
}
