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

	CandyBar * snack = new CandyBar[3];
	snack[0] = {"Candy", 3.0, 7}
	snack[1] = {"Sweet sweet", 4.0, 15}
	snack[2] = {"Yum-yum", 2.5, 8};

	cout << "Brand: " << snack[0].brand << endl
	     << "Weight: " << snack[0].weight << endl
	     << "Calories: " << snack[0].cal << endl << endl;

	cout << "Brand: " << snack[1].brand << endl
	<< "Weight: " << snack[1].weight << endl
	<< "Calories: " << snack[1].cal << endl << endl;

	cout << "Brand: " << snack[1].brand << endl
	<< "Weight: " << snack[2].weight << endl
	<< "Calories: " << snack[2].cal << endl << endl;

	delete [] snack;
	return 0;
}