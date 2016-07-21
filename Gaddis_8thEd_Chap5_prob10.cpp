#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int RandNum,
		Seed,
		Guess;

	Seed = time(0);
	srand(Seed);
	RandNum = 1 + rand() % 100; 

	// cout << RandNum << endl;

	cout << "\nI generated a random number between 1 and 100\n"
		 << "Can you guess what my number is? ";
	cin  >> Guess;

	while (Guess > RandNum)
	{
		cout << "Too high. Try again.\n";
		cin  >> Guess;
	}
	while (Guess < RandNum)
	{
		cout << "Too low. Try again.\n";
		cin  >> Guess;
	}


	cout << "Congratulations. You figured out my number.\n\n";

	return 0;
}