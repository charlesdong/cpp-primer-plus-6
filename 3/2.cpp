#include <iostream>

const double Inch_per_m = 0.0254;
const double Kg_per_pound = 2.2;
const double Foot_per_inch = 12;

int main()
{
	using namespace std;
	int hf, hi, height;
	double weight, weight_kg;
	double height_m;
	cout << "Enter your height (please enter two integers x and y, which means x feet y inches): ";
	cin >> hf >> hi;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;
	height = hf * Foot_per_inch + hi;
	height_m = double(height) * Inch_per_m;
	weight_kg = weight / Kg_per_pound;
	double bmi = weight_kg / height_m / height_m;
	cout << "Your BMI: " << bmi << endl;
}
