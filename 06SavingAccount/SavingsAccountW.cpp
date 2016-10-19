/**
* Class: CS 110A
* Description : 

* This program will calculates the balance of a savings account at the end of a period of time.
* It will ask you for the annual interest rate, the starting balance, and the number of months that have passed since the account was established.
* And it will iterate once for every month.

1.It will ask you for the amount deposited into the account during the month.(Negative numbers are can not be accepted.) This amount will be added to the balance.
2.It will ask you for the amount withdrawn from the account during the month.(Negative numbers are can not be accepted.) This amount will be subtracted from the balance.
3.And then, it will calculate the monthly interest. And this result will be added to the balance.

* Finally, after the last iteration, the program will display the ending balance, the total amount of deposits, the total amount of withdrawals, and the total interest earned.

ref. If a negative balance is calculated at any point, a message will be displayed indicating the account has been closed.

* Due Date: Oct/12/2015
* Name: Minho Cha
* File Name: SavingsAccountW.cpp
* Assignment #6
*/



#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{

 float ANNUAL_INTEREST_RATE;
 double BALANCE, DEPOSITS, WITHDRAWALS, TOTAL_DEPOSITS, TOTAL_WITHDRAWALS, INTEREST_EARNED, TOTAL;
 int number = 1;
 int PASSED_MONTHS;
 int months;
 ofstream output;

 cout << "Enter the annual interest rate on the account (e.g. .04): ";
  cin >> ANNUAL_INTEREST_RATE;

 cout << "Enter the starting balcance: ";
  cin >> BALANCE;

 cout << "How many months have passed since the account was established? ";
  cin >> PASSED_MONTHS;
	while ( PASSED_MONTHS <= 0 ){
	 cout << "Number of month must be non-negative: ";
	  cin >> PASSED_MONTHS;}
	while ( (PASSED_MONTHS+1) != number){
	 cout << "\nMonth " << number++ << endl;


 cout << "\tTotal deposits for this month: $";
  cin >> DEPOSITS;
	 while ( DEPOSITS <0 ){
	  cout << "\tDeposits must be zero or greater. " << "Please re-enter: ";
	   cin >> DEPOSITS;}

	for (; months <= PASSED_MONTHS; months++) {
	   }
	 TOTAL_DEPOSITS += DEPOSITS;


 cout << "\tTotal withdrawals for this month: $";
  cin >> WITHDRAWALS;	
	 while( WITHDRAWALS <0 ){
	  cout << "\tWithdrawals must be zero of greater. " << "Please re-enter: ";
	   cin >> WITHDRAWALS;}

	for (; months <= PASSED_MONTHS; months++) {
	   }
	 TOTAL_WITHDRAWALS += WITHDRAWALS;
 	}

 cout << fixed << showpoint << setprecision(2);

 INTEREST_EARNED = (ANNUAL_INTEREST_RATE / 12) * BALANCE;
 TOTAL = BALANCE + TOTAL_DEPOSITS - TOTAL_WITHDRAWALS + INTEREST_EARNED;

 cout << "\nThe account has a balcance of $" << TOTAL << endl;
	if ( TOTAL < 0 )
 	 cout << "Because the balance is negative, the account has been closed.\n";

	 output.open("banking.txt");	 

	 output << "\nEnding balance:\t\t   $\t" << TOTAL << endl;
	 output << "Amount of deposits:\t   $\t" << TOTAL_DEPOSITS << endl;
	 output << "Amount of withdrawals:\t   $\t" << TOTAL_WITHDRAWALS << endl;
	 output << "Amount of interest earned: $\t" << INTEREST_EARNED << endl;

	 output.close();	
	 cout << "Saved" << endl;

 cout << "\n\nProgrammed by Minho Cha"<< endl;

 return 0;
}
