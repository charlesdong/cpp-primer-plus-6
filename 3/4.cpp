#include <iostream>

const int S_TO_M = 60;
const int M_TO_H = 60;
const int H_TO_D = 24;

int main()
{
	using namespace std;
	int secs, left;
	int d, h, m, s;
	cout << "Enter the number of seconds: ";
	cin >> secs;
	left = secs;
	s = left % S_TO_M;
	left /= S_TO_M;
	m = left % M_TO_H;
	left /= M_TO_H;
	h = left % H_TO_D;
	left /= H_TO_D;
	d = left;
	cout << secs << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds\n";
	return 0;
}	
