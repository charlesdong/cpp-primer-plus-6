#include <iostream>
#include <cstring>
using namespace std;

const int LEN = 40;
struct CandyBar
{
	char brand[LEN];
	double weight;
	int heat;
};

void set_members(CandyBar & cb, const char * brand, double weight, int heat);
void show(CandyBar & cb);

int main()
{
	char brand[LEN];
	double weight;
	int heat;
	CandyBar candy_bar;
	cout << "Enter the brand of the candy bar: ";
	cin.get(brand, LEN);
	cout << "Enter the weight of the candy bar: ";
	cin >> weight;
	cout << "Enter the heat of the candy bar: ";
	cin >> heat;
	set_members(candy_bar, brand, weight, heat)
	show(candy_bar);
	return 0;
}

void set_members(CandyBar & cb, const char * brand, double weight, int heat)
{
	strcpy(cb.brand, brand);	// should use strcpy instead of =
	cb.weight = weight;
	cb.heat = heat;
}

void show(CandyBar & cb)
{
	cout << "Candy brand: " << cb.brand
		<< "Candy weight: " << cb.weight
		<< "Candy heat: " << cb.heat
		<< endl;
}