#include <iostream>
#include <string>

struct CandyBar
{
	std::string brand;
	double weight;
	int cal;
};

int main()
{
	using namespace std;
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Brand: " << snack.brand << endl
	     << "Weight: " << snack.weight << endl
	     << "Calories: " << snack.cal << endl;
	return 0;
}