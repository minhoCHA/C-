/**
* Class: CS 110A
* Description: This is a program that manages a list up to 10 players and their
high scores in the computer's memory.
-The program will give the user a menu and let the user to choose a number within 1~5.
1. Add new player and score. -> If the user choose 1, then the program let the user to input player and score.
2. Print all players and scores. -> If the user choose 2, then the program will displays all players and scores.
3. Search for a player's score. -> If the user choose 3, then the program let the user to enter the player,
and then the program will display the player's score.
4. Remove a player. -> If the user choose 4, then the program let the user to enter a player,
and then the program will remove the player.
5. Quit. -> If the user choose 5, the program will be ended.
* Due Date: Dec/09/2015
* Name: Minho Cha
* File Name: HighScoreManager.cpp
* Assignment #11
**/

#include <iostream>
#include <string>
using namespace std;
int addPlayer(string[], int[], int[]);
void printPlayers(string[], int[]);
void searchPlayer(string[], int[]);
void removePlayer(string[], int[]);

int index = 0;
string playerName;
int playerScore;
int n;

int addPlayer(string player[], int score[], int number[])
{
	cout << "How many player(s) are you going to input?\n";
	cin >> n;
	number[index] = n;
	if (n >= 11){
		cout << "Number should be under 11.\n";
		return 0;
	}
	else{
		for (int j = 0; j < n; j++){
			cout << "Enter new player name.\n";
			cin >> playerName;
			player[index] = playerName;

			cout << "Enter new player score.\n";
			cin >> playerScore;
			score[index] = playerScore;
			cout << endl;
			index++;
		}
	}
}
void printPlayers(string player[], int score[])
{
	cout << "\nPlayer\tScores\n";
	for (int i = 0; i < index; i++)
		cout << player[i] << "\t" << score[i] << "\n";

	cout << endl;
}
void searchPlayer(string player[], int score[])
{
	cout << "\nWhat player to search for?\n";
	cin >> playerName;
	for (int i = 0; i < index; i++){
		if (playerName == player[i]){
			cout << "The score for " << player[i] << " is " << score[i] << "\n\n";
		}
	}
}
void removePlayer(string player[], int score[], int number[])
{
	cout << "What player to remove?\n";
	cin >> playerName;
	for (int i = 0; i < index; i++){
		if (playerName == player[i]){
			for (int j = i; j < index - 1; j++){
				player[j] = player[j + 1];
				score[j] = score[j + 1];
			}
			index--;
			cout << "Player " << playerName << " removed.\n\n";
		}
	}
}

int main()
{
	const int SIZE = 10;
	string player[SIZE];
	int score[SIZE];
	int number[SIZE];

	int userChoice;
	while (1)
	{
		cout << "Enter an option.\n"
			<< "1. Add new player and score.\n"
			<< "2. Print all players and scores.\n"
			<< "3. Search for a player's score.\n"
			<< "4. Remove a player.\n"
			<< "5. Quit.\n";
		cin >> userChoice;

		if (userChoice == 1){
			addPlayer(player, score, number);
		}
		else if (userChoice == 2){
			printPlayers(player, score);
		}
		else if (userChoice == 3){
			searchPlayer(player, score);
		}
		else if (userChoice == 4){
			removePlayer(player, score, number);
		}
		else{
			cout << "Programmed by Minho Cha" << endl;
			break;
		}
	}
	return 0;
}
