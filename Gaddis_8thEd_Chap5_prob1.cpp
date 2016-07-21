#include <iostream>
using namespace std;

int main()
{
	int Test,  						 	// Initialzation of variable for the test 
		Begin = 32;					 	// Initialzation of the Begin to 32

	for (int Row = 0; Row < 6; Row++)	// Outter loop to make 6 rows
	{
		Test = Begin + 16; 				// 16 character on each line
		for(int ASCII = Begin; ASCII < Test; ASCII++)
		{
			cout << static_cast<char>(ASCII) << " ";
		}
		Begin = Test; 					// Start new row one character than last line
		cout << endl;
	}
	return 0;
}