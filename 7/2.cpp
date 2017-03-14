#include <iostream>

void fill_array(double scores[], int * pn);	// will change data, including *pn
void show_array(const double scores[], int n);	// don't change data
double average(const double scores[], int n);	// don't change data

int main()
{
	double scores[10];
	int num;
	fill_array(scores, &num);	// note that the value of num will be changed
	show_array(scores, num);
	cout << "Average: " << average(scores, num) << endl;
}

void fill_array(double scores[], int * pn)
{
	cout << "Enter the number of scores (up to 10): ";
	cin >> *pn;	// may change the value that the original argument points to
	if (*pn > 10)
	{
		cout << "The biggest permitted number of scores is 10.\n"
		     << "Number set to 10.\n";
		*pn = 10;
	}
	int i;
	for (i = 0; i < *pn; i++)
	{
		cout << "Enter score #" << (i + 1) << ": ";
		cin >> scores[i];
	}
}

void show_array(const double scores[], int n)
{
	int i;
	cout << "Scores:\n";
	for (i = 0; i < n; i++)
		cout << scores[i] << " ";
	cout << endl;
}

double average(const double scores[], int n)
{
	double sum = 0.0;
	for (int i = 0; i < n; i++)
		sum += scores[i];
	return sum / n;
}