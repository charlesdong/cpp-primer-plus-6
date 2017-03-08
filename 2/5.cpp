#include <iostream>

double fahrenheit(double cel);

int main()
{
    using namespace std;
    double cel;
    cout << "Please enter a Celsius value: ";
    cin >> cel;
    cout << cel << " degrees Celsius is " << fahrenheit(cel) << " degrees Fahrenheit\n";
    return 0;
}

double fahrenheit(double cel)
{
    return cel * 1.8 + 32.0;
}
