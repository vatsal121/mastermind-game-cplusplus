// MasterMind_VC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	cout << "Welcome to Mastermind Game!!." << endl;
	int generatedRandomNumber = 0, guessedNumber = 0, rightPlaceCount = 0, wrongPlaceCount = 0;
	generatedRandomNumber = generateValidNumber();
	cout << generatedRandomNumber << endl;
	while (generatedRandomNumber != guessedNumber) {
		guessedNumber = readValidInt();
		rightPlaceCount = inPlaceMatches(generatedRandomNumber, guessedNumber);
		wrongPlaceCount = outOfPlaceMatches(generatedRandomNumber, guessedNumber);
		cout << "You have guessed " << rightPlaceCount << " correct digit in the correct position and " << wrongPlaceCount << " correct digit in the incorrect position." << endl << endl << endl;
	}
	cout << "Congratulations! You win.!" << endl;
	return 0;
}
