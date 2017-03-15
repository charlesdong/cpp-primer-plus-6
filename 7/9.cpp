#include <iostream>
using namespace std;
const int SLEN = 30;
struct student
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done!\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	cout << "Please enter information about students:\n";
	int i;
	for (i = 0; i < n; i++)
	{
		cout << "Student " << (i + 1) << ":\n";
		cout << "Name: ";
		cin.getline(pa[i].fullname, SLEN);
		if (pa[i].fullname == '\0')
			break;
		cout << "Hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		if (pa[i].hobby == '\0')
			break;
		cout << "OOP level: ";
		cin >> pa[i].ooplevel;
		cout << endl;
	}
	return i;
}

void display1(student st)
{
	cout << "Displaying student information passed by value:\n";
	cout << "Name: " << st.name << endl
		<< "Hobby: " << st.hobby << endl
		<< "OOP level: " << st.ooplevel << endl << endl;
}

void display2(const student * ps)
{
	cout << "Displaying student information passed by pointer:\n";
	cout << "Name: " << ps->name << endl
		<< "Hobby: " << ps->hobby << endl
		<< "OOP level: " << ps->ooplevel << endl << endl;
}

void display3(const student pa[], int n)
{
	cout << "Displaying all students' information:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Student " << (i + 1) << ":\n"
			<< "Name: " << pa[i].name << endl
			<< "Hobby: " << pa[i].hobby << endl
			<< "OOP level: " << pa[i].ooplevel << endl << endl;
	}
}