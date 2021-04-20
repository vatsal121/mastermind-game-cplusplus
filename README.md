# mastermind-game-cplusplus
Master Mind Guessing number game using C++


## Instructions

Creating the program involves creating a variation of the game Mastermind with numbers. If you have never played it, the game is played as follows:
Step 1 
The computer will generate a random 4-digit integer that contains no identical digits (what is the smallest such number? what is the largest?). We will call all these 4 digit numbers 'valid numbers'. For example, 1234, 5648 and 9082 are all valid numbers. 123, 45678, 9989, 0415 and 234f are not.
Step 2 
The player must then guess a valid 4-digit number and their input must be validated.
Step 3 
When the player enters their guess, the computer must then tell the player how accurate their guess was by providing the following information:
	a) the number of correct digits in the correct position
	b) the number of correct digits in the wrong position
For example, if the computer's number is 1234 and the user guesses 4219, the game will tell the player that they guessed 1 digit in the correct position (2) and two digits in the wrong position (1 and 4).
Step 4 
The game continues until the player guesses the correct number, then terminates.

Sample execution of the program, assuming that the computer's number is 9087:
	Welcome to Mastermind
	
Can you guess my 4-digit number?
1234 //user input

	You have guessed 0 correct digits in the correct position
	and 0 correct digits in the incorrect position
	
Guess again:
6789 //user input

	You have guessed 1 correct digit in the correct position
	and 2 correct digits in the incorrect position
	
Guess again:
9875 //user input

	You have guessed 1 correct digit in the correct position
	and 2 correct digits in the incorrect position
	
Guess again:
9870 //user input

	You have guessed 1 correct digit in the correct position
	and 3 correct digits in the incorrect position
	
Guess again:
9780 //user input

	You have guessed 1 correct digit in the correct position
	and 3 correct digits in the incorrect position
	
Guess again:
9788 //user input

	Invalid input

Guess again:
978 //user input

	Invalid input

Guess again:
blargh I will never win this game //user input

	Invalid input
		
Guess again:
9087 //user input

	You win!
