#include <iostream>
using namespace std;

void display(int h, int m);

int main()
{
    int h, m;
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    display(h, m);
    return 0;
}

void display(int h, int m)
{
    cout << "Time: " << h << ":" << m << endl;
}
