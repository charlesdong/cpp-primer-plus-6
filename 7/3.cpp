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
	b.volume = b.length * b.width * b.height;
	showv(b);
	showp(&b);
	return 0;
}

void showv(box b)
{
	cout << "Showing box information by data passed by value:\n";
	cout << "Maker: " << b.maker << endl
		<< "Height: " << b.height << endl
		<< "Width: " << b.width << endl
		<< "Length: " << b.length << endl
		<< "Volume: " << b.volume << endl;
}

void showp(box * pb)
{
	cout << "Showing box information by data passed by pointer:\n";
	cout << "Maker: " << pb->maker << endl
		<< "Height: " << pb->height << endl
		<< "Width: " << pb->width << endl
		<< "Length: " << pb->length << endl
		<< "Volume: " << pb->volume << endl;
}
