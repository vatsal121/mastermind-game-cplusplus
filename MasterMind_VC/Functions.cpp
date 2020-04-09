#include <iostream>
#include <time.h>
using namespace std;

const int MIN_NUMBER_RANGE = 1000, MAX_NUMBER_RANGE = 9999, MAX_SIZE_OF_ARRAY = 4;

int generateValidNumber() {

	int randomUniqueNumber = 0, tmp = 0, arr[MAX_SIZE_OF_ARRAY], maxIndex = MAX_SIZE_OF_ARRAY - 1, counterFlag = 0;
	srand(time(0));
	randomUniqueNumber = rand() % (MAX_NUMBER_RANGE - MIN_NUMBER_RANGE + 1) + MIN_NUMBER_RANGE;
	tmp = randomUniqueNumber;
	for (int i = maxIndex; i >= 0; i--) {
		arr[i] = tmp % 10;
		tmp = tmp / 10;
	}
	tmp = randomUniqueNumber;
	while (tmp != 0) {
		int number = tmp % 10;
		for (int j = MAX_SIZE_OF_ARRAY - 1; j >= 0; j--)
		{
			if (number == arr[j]) {
				counterFlag++;
			}
			if (counterFlag > 1) {
				break;
			}
		}
		if (counterFlag > 1) {
			randomUniqueNumber = rand() % (MAX_NUMBER_RANGE - MIN_NUMBER_RANGE + 1) + MIN_NUMBER_RANGE;
			tmp = randomUniqueNumber;
			for (int i = maxIndex; i >= 0; i--) {
				arr[i] = tmp % 10;
				tmp = tmp / 10;
				i--;
			}
			tmp = randomUniqueNumber;
		}
		else {
			tmp = tmp / 10;
		}
		counterFlag = 0;
	}

	return randomUniqueNumber;
}

int readValidInt()
{
	int value;
	cout << "Can you guess my 4 digit number?: ";
	cin >> value;
	while (cin.fail() || cin.peek() != '\n' || value < 1000 || value >9999)
	{
		cin.clear();
		cin.ignore(512, '\n');
		cout << "Invalid Input!." << endl;
		cout << "Can you guess my 4 digit number?: ";
		cin >> value;
	}
	cin.ignore(512, '\n');
	return value;
}

int compareNumbersAndFindCorrectIncorrectPositions(int generatedRandomNumber, int userInput, bool isGetRightCounts) {
	int generatedNumberArr[MAX_SIZE_OF_ARRAY], userInputArray[MAX_SIZE_OF_ARRAY], genNum = generatedRandomNumber, userIn = userInput, rightGuessCount = 0, incorrectGuessCount = 0;
	for (int i = MAX_SIZE_OF_ARRAY - 1; i >= 0; i--) {
		generatedNumberArr[i] = genNum % 10;
		genNum = genNum / 10;

		userInputArray[i] = userIn % 10;
		userIn = userIn / 10;
	}

	for (int i = 0; i < MAX_SIZE_OF_ARRAY; i++)
	{
		for (int j = 0; j < MAX_SIZE_OF_ARRAY; j++)
		{
			if (generatedNumberArr[i] == userInputArray[j] && i == j) {
				rightGuessCount++;
			}
			if (generatedNumberArr[i] == userInputArray[j] && i != j) {
				incorrectGuessCount++;
			}
		}

	}

	if (isGetRightCounts) {
		return rightGuessCount;
	}

	return incorrectGuessCount;

}

int inPlaceMatches(int generatedRandomNumber, int userInput) {

	return compareNumbersAndFindCorrectIncorrectPositions(generatedRandomNumber, userInput, true);
	//cout << "You have guessed " << compareNumbersAndGuessCorrectIncorrectPositions(generatedRandomNumber, userInput, true) << " correct digit in the correct position ";
}

int outOfPlaceMatches(int generatedRandomNumber, int userInput) {
	return compareNumbersAndFindCorrectIncorrectPositions(generatedRandomNumber, userInput, false);
	//cout << "and " << compareNumbersAndGuessCorrectIncorrectPositions(generatedRandomNumber, userInput, false) << " correct digit in the incorrect position." << endl << endl << endl;
}


