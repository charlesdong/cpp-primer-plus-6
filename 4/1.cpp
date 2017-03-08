#include <iostream>
int main()
{
    using namespace std;

    char firstname[30], lastname[30];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(firstname, 30);
    cout << "What is your last name? ";
    cin.getline(lastname, 30);
    cout << "What letter grade do you deserve? ";
    cin.get(grade);
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << lastname << ", " << firstname << endl
	       << "Grade: " << char(grade + 1) << endl
	       << "Age: " << age << endl;

    return 0;
}
