#pragma once
#include <iostream>
#include <string>
using namespace std;

int generateValidNumber();
int readValidInt();
int inPlaceMatches(int generatedRandomNumber, int userInput);
int outOfPlaceMatches(int generatedRandomNumber, int userInput);
int compareNumbersAndFindCorrectIncorrectPositions(int generatedRandomNumber, int userInput, bool isGetRightCounts);