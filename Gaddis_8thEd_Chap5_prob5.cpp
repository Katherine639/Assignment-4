#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int KPH, MPH;

	cout << "Table of speeds in kilometers per hour\n"
		 << "converted to miles per hour.\n\n"
		 << "Kilometers per hour       miles per hour\n"
		 << "------------------------------------------\n";

	for (KPH = 60; KPH <= 130; KPH += 5)
	{
		MPH = KPH * 0.6214;
		cout << right << setw(10) << KPH;
		cout << setw(25) << MPH << endl;
	}
	cout << endl;
	return 0;
}