#include <iostream>
#include <string>
int main()
{
	using namespace std;
	string name, dessert;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your favorite dessert: ";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert << " for you, " << name << endl;
}
