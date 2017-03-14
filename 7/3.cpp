#include <iostream>
using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void showv(box b);
void showp(box * pb);

int main()
{
	using namespace std;
	box b;
	cout << "Enter box maker: ";
	cin.getline(b.maker, 40);
	cout << "Enter box height: ";
	cin >> b.height;
	cout << "Enter box width: ";
	cin >> b.width;
	cout << "Enter box length: ";
	cin >> b.length;
	cout << "Enter box volume: ";
	cin >> b.volume;
	showv(b);
	showp(&b);
	return 0;
}