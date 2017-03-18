#include <iostream>
#include <cstring>
#include "golf.h"

int main()
{
	using namespace std;
	golf g;
	int hc;
	while (setgolf(g))
	{
		showgolf(g);
		cout << "Enter a new handicap value: ";
		cin >> hc;
		handicap(g, hc);
		showgolf(g);
	}
	return 0;
}