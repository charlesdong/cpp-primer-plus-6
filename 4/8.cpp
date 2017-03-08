#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
	string company;
	double diameter;
	double weight;
};

int main()
{
	Pizza * pizza = new Pizza;
	cout << "Enter the pizza's company name: ";
	getline(cin, pizza->company);
	cout << "Enter the pizza's diameter: ";
	cin >> pizza->diameter;
	cout << "Enter the pizza's weight: ";
	cin >> pizza->weight;
	cout << "Company: " << pizza->company << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight: " << pizza->weight << endl;
	delete pizza;
	return 0;
}