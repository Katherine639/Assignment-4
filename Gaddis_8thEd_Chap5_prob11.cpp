#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int Random,
		Guess,
		Seed,
		Tries = 0;  // Accumulator initialized to 0

	Seed = time(0);
	srand(Seed);
	Random = 1 + rand() % 100;

	cout << "\nI generated a number between 1 and 100.\n"
		 << "Can you guess what my number is? ";

	do
	{
		cin  >> Guess;
		Tries++;

		if (Guess < Random)
			cout << "Too low. Try again.\n";
		if (Guess > Random)
			cout << "Too High. Try again.\n";

	} while (Guess != Random);
	cout << "Congratulations. You figured\nout my number "
		 << "in " << Tries << " guesses.\n\n";
	return 0;
}