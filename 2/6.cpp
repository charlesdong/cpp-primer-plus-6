#include <iostream>

double astro(double a);

int main()
{
    using namespace std;
    double light_years;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    cout << light_years << " light years = " << astro(light_years) << " astronomical units.\n";
    return 0;
}

double astro(double a)
{
    return a * 63240;
}
