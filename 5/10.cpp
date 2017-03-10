#include <iostream>

int main()
{
	using namespace std;
	int n;
	cout << "Enter number of rows: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			if (j >= n + 1 - i)
				cout << "*";
			else
				cout << ".";
		cout << endl;
	}
	return 0;
}