#include <iostream>
const int Factor = 12;
int main()
{
    using namespace std;
    int height;
    int feet, inches;
    cout << "Enter your height: ";
    cin >> height;
    feet = height / Factor;
    inches = height % Factor;
    cout << "Your height is equal to " << feet << " feet, " << inches << " inches\n";
    return 0;
}
