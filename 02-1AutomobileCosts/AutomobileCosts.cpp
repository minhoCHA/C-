/**
* Class: CS 110A
* Description: About AutomobileCosts
* Due Date: Sep/09/2015
* Name: Minho Cha
* File Name: AutomobileCosts.cpp
* Assignment #2
*/



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double loan, insurance, gas, oil, tires, maintenance,
monthly, annual;


   cout << "Enter the monthly loan payment amount: ";
   cin >> loan;
   cout << "Enter the monthly cost of insurance: ";
   cin >> insurance;
   cout << "Enter the monthly cost of gas: ";
   cin >> gas;
   cout << "Enter the monthly cost of oil: ";
   cin >> oil;
   cout << "Enter the monthly cost of tires: ";
   cin >> tires;
   cout << "Enter the monthly cost of maintenance: ";
   cin >> maintenance;

   monthly= loan + insurance + gas + oil + tires + maintenance;
   annual= monthly*12;

   cout << "The total monthly cost is: " << "$"<< monthly << "." << endl;
   cout << "The total annual cost is: " << "$"<<annual<< "."<< endl;

   cout << "Programmed by Minho Cha" << endl;

  return 0;

}
