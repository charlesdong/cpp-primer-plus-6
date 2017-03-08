#include <iostream>
const double Factor = 60.0;
int main()
{
	using namespace std;
	int d, m, s;
	cout << "Enter a latitude in degrees, minutes, and seconds:\n";
	cout << "First, enter the degrees: ";
	cin >> d;
	cout << "Next, enter the minutes of arc: ";
	cin >> m;
	cout << "Finally, enter the seconds of arc: ";
	cin >> s;
	cout << d << " degrees, " << m << " minutes, " << s << " seconds = "
	     << (d + double(m) / Factor + double(s) / Factor / Factor) << " degrees\n";
}
