#include <iostream>

struct car
{
	char make[40];
	int year;
};

int main()
{
	using namespace std;
	int num;
	int i;
	car * cars;

	cout << "How many cars do you wish to catalog? ";
	cin >> num;
	cars = new car[num];
	for (i = 1; i <= n; i++)
	{
		cout << "Car #" << i << ":\n";
		cout << "Please enter the make: ";
		cin.getline(cars[i].make, 40);
		cin.get();
		cout << "Please enter the year made: ";
		cin >> cars[i].year;
	}

	cout << "Here is your collection:\n";
	for (i = 1; i <= n; i++)
		cout << cars[i].year << " " << cars[i].year << endl;

	return 0;
}