Script started on Tue 17 Nov 2015 08:01 : 50 PM PST
[mcha@hills ~]$ cat Assin gnm Grades.cpp
/**
* Class: CS 110A
* Description:

* This program will reads student scores, gets the best score, and then assigns grades based on the following scheme:
- Grade is A if score is >= best - 10;
- Grade is B if score is >= best - 20;
- Grade is C if score is >= best - 30;
- Grade is D if score is >= best - 40;
- Grade is F otherwise.
* The program prompts the user to enter the total number of students, then prompts the user to enter all of the scores, and concludes by displaying the grades.

* Due Date: Nov/18/2015
* Name: Minho Cha
* File Name: AssignGrades.cpp
* Lab #10
*/

#include <iostream>
using namespace std;
int main(){
	int students;
	cout << "Enter the number of students: ";
	cin >> students;
	int *scores = new int[students];
	char *grade = new char[students];
	cout << "Enter " << students << " scores: \n";
	for (int i = 0; i < students; i++)
	{
		cout << "student " << i << " score: ";
		cin >> scores[i];
	}

	double max = scores[0];
	for (int j = 0; j < students; j++)
		if (scores[j] > max) max = scores[j];

	for (int x = 0; x < students; x++){
		if (scores[x] >= max - 10)
			grade[x] = 'A';
		else if (scores[x] >= max - 20)
			grade[x] = 'B';
		else if (scores[x] >= max - 30)
			grade[x] = 'C';
		else if (scores[x] >= max - 40)
			grade[x] = 'D';
		else grade[x] = 'F';
	}
	cout << '\n';
	for (int i = 0; i < students; i++)
		cout << "Student " << i << " has score " <<
		scores[i] << " and grade " << grade[i] << "\n";

	return 0;
}
