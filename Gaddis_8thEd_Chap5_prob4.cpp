#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double C,
		   F;

	cout << "Table of the Celsius temperatures from 0\n"
		 << "to 20 and their Fahrenheit equivalents:\n\n"
		 << "Celsius     Fahrenheit\n"
		 << "----------------------\n";

	for(C = 0; C <= 20; C++)
	{

		F = (9/5 * C) + 32;
		cout << right << setw(4) << C;
		cout << setw(14) << F << endl;
	}
	cout << endl;
	return 0;
}