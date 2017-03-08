#include <iostream>
int main()
{
	using namespace std;
	double distance, gas;
	cout << "Enter the distance drived (in miles): ";
	cin >> distance;
	cout << "Enter the amount of gas used (in gallon):";
	cin >> gas;
	cout << "Miles per gallon: " << distance / gas << endl;
	return 0;
}