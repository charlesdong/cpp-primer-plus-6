#include <iostream>

int main()
{
	using namespace std;
	char ch;

	cout << "Please enter one of the following choices:\n"
	     << "c) carnivore		p) pianist\n"
	     << "t) tree		g) game\n";

	cin.get(ch);
	while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
	{
		cout << "Please enter a, c, p, t, or g: ";
		cin.get(ch);
	}

	switch (ch)
	{
	case 'c':
		cout << "A tiger is a carnivore\n";
		break;
	case 'p':
		cout << "Beethoven is a pianist\n";
		break;
	case 't':
		cout << "A maple is a tree\n";
		break;
	case 'g':
		cout << "There are many game projects on GitHub\n";
		break;
	}

	return 0;
}