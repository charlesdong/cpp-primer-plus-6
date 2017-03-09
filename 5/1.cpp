#include <iostream>
int main()
{
    using namespace std;
    int a, b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << "Sum: " << sum << endl;
    return 0;
}
