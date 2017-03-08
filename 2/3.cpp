#include <iostream>
using namespace std;

void f1();
void f2();

int main()
{
    f1();
    f1();
    f2();
    f2();
    return 0;
}

void f1()
{
    cout << "Three blind mice\n";
}

void f2()
{
    cout << "See how they run\n";
}
