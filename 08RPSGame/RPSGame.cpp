#include <iostream>
#include <cstlib>
using namespace std;

int getComputerChoice();
int getUserChoice();
void displayChoice(int);
void determineWinner(int, int);


int getUserChoice(){

	int userChoice;

	while (true){
		cout << " Game Menu\n"
			<< "----------\n"
			<< "1) Rock\n"
			<< "2) Paper\n"
			<< "3) Scissors\n"
			<< "4) Quit\n"
			<< "Enter your Choice: ";
		cin >> userChoice;
		if (userChoice >= 1 && userChoice <= 4){
			return userChoice;
		}
		cout << "Invalid. Enter 1, 2, 3 or 4: ";
	}return 0;
}
int getComputerChoice(){
	unsigned seed = time(0);
	srand(seed);
	int computerChoice = rand() % 3 + 1;
	return computerChoice;
}
void displayChoice(int choice){
	if (choice == 1){
		cout << "Rock";
	}
	else if (choice == 2){
		cout << "Paper";
	}
	else if (choice == 3){
		cout << "Scissors";
	}
	cout << "\n";

}
void determineWinner(int userChoice, int computerChoice){
	if (userChoice == computerChoice)
		cout << "Tie. No Winner.";
	else if (userChoice == 1 && computerChoice == 2)
		cout << "Couputer win! Paper wraps rock.";
	else if (userChoice == 1 && computerChoice == 3)
		cout << "You win! Rock smashes scissors.";
	else if (userChoice == 2 && computerChoice == 1)
		cout << "You win! Paper wraps rock.";
	else if (userChoice == 2 && computerChoice == 3)
		cout << "Computer win! Scissors cut paper.";
	else if (userChoice == 3 && computerChoice == 1)
		cout << "Computer win! Rock smashes scissors.";
	else if (userChoice == 3 && computerChoice == 2)
		cout << "You win! Scissors cut papar.";
	cout << "\n\n";
}
int main(){
	cout << "\nLet's play Rock, Paper, Scissors!\n"

		while (true){
			int userChoice = getUserChoice();
			if (userChoice == 4)
				break;
			cout << "You selected: ";
			displayChoice(userChoice);

			int computerChoice = getComputerChoice();
			cout << "The computer selected: ";
			displayChoice(computerChoice);
		}
	return 0;
}