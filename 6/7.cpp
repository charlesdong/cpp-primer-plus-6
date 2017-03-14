#include <iostream>
#include <cctype>

bool isvowel(char ch);

int main()
{
	using namespace std;
	char word[20];
	int vowels = 0;
	int consonants = 0;
	int others = 0;

	cout << "Enter words (q to quit):\n";
	cin >> word;
	while (word[0] != 'q')
	{
		word[0] = tolower(word[0]);
		if (isvowel(word[0]))
			vowels++;
		else if (isalpha(word[0]))
			consonants++;
		else
			others++;
		cin >> word;
	}

	cout << vowels << " words beginning with vowels\n";
	cout << consonants << " words beginning with consonants\n";
	cout << others << " others\n";

	return 0;
}

bool isvowel(char ch)
{
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}