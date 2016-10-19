/**
* Class: CS 110A
* Description:

 1. This program will read two floating point numbers(the first read inta a variable cakked first and the second read into a variable called second)
 2. And then will call the function swap with the actual parameters first and second.
 3. The swap function having formal parameters number1 and number2 will swap the value of the two variables.

* Due Date: Nov/02/2015
* Name: Minho Cha
* File Name: Swap.cpp
* Lab #9
*/

#include <iostream>
using namespace std;

void swap(int number1, int number2);

int main()
{
   float first;
   float second;

   cout << "Enter the first number" << endl;
   cout << "Then hit enter" << endl;
   cin >> first;

   cout << "Enter the second number" << endl;
   cout << "Then hit enter" << endl;
   cin >> second;

   cout << endl << "You input the numbers as " << first << " and "
        << second << endl;

   swap(first, second);   

   cout << "After swapping, the first number has the value of " << first
        << " which was the value of the second number." << endl
        << "The second number has the value of " << second
        << " which was the value of the first number." << endl;
   
   cout << "\nProgrammed by Minho Cha\n";

   return 0;
}
