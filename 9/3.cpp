#include <iostream>
#include <cstring>

struct chaff
{
	char dross[20];
	int slag;
};
const int BUF = 48;
char buffer[BUF];

void set_chaff(chaff & c, const char * dross, int slag);

int main()
{
	char * p_chaff = new (buffer) chaff[2];
	set_chaff(p_chaff[0], "DrossSlagSlay", 12);
	set_chaff(p_chaff[1], "C/C++ Millennium", 45);
	for (int i = 0; i < 2; i++)
	{
		cout << "At index " << i
			<< "\nDross: " << p_chaff[i].dross
			<< "\nSlag: " << p_chaff[i].slag << endl;
	}
	delete [] p_chaff;
	return 0;
}
