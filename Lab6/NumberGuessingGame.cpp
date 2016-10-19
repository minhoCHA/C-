/**
* Class: CS 110A
* Description: 

1. This program will generate a random number and ask the user to guess what the number is.
2. If the user's guess is higher than the random number, the program will display "Too high, try again." and if it lower than the random number, it will display "Too low, try again."
3. The program will ask you until the user correctly guesses the random number.
4. The program keeps a count of the number of guesses that the user makes.
5. When the user correctly guesses the random number, the program will display the number of guesses and also display "Congratulations! You guessed it!".

* Due Date: Oct/5/2015
* Name: Minho Cha
* File Name: NumberGuessingGame.cpp
* Lab #6
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int guess, count;
	unsigned seed = time(0);
	srand(seed);
	int number = 1+rand()%10;

	cout << "I'm thinking of a number. Can you" << endl << "guess what it is? ";
	cin >> guess;

	while (number!=guess){
	 count++;

		if (guess<number){
		 cout << "No, that's too low." << endl;
		 }
		else{
		 cout << "Sorry, that's too high." << endl;
		 }
	 cout << "Guess again: ";
	 cin >> guess;
	 }

	cout << "Congratulations! You guessed it!" << endl << "I was thinking of the number " << number << ".";
	cout << "\nThe number of guesses is " << count;
	cout << "\n\nProgrammed by Minho Cha";

	return 0;
}

