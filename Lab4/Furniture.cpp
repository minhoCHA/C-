/**
* Class: CS 110A
* Description: About Furniture
* Due Date: Sep/14/2015
* Name: Minho Cha
* File Name: Furniture.cpp
* Lab #4
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   
   double quantity1, quantity2, quantity3, colonial, modern, classical, total;


   cout << "Please input the number of American Colonial chairs sold"<< endl;
   cin >> quantity1;
   cout << "Please input the number of Modern chairs sold"<< endl;
   cin >> quantity2;
   cout << "Please input the number of French Classical chirs sold"<< endl;
   cin >> quantity3;


   double price1= 85.00;   
   double price2= 57.50;
   double price3= 127.75;

   colonial= quantity1 * price1;
   modern= quantity2 * price2;
   classical= quantity3 * price3;
   total= colonial + modern + classical;

   cout <<"\nThe total sales of American Colonial chairs " << "$"<< setprecision(2) << fixed  <<colonial<< endl;
   cout << "The total sales of Modern chairs " << "$" <<setprecision(2)<<fixed <<modern << endl;
   cout << "The total sales of French Classical chairs " << "$" <<setprecision(2)<<fixed <<classical <<endl;
   cout << "The total sales of all chairs " << "$" <<setprecision(2) <<fixed<< total << endl;   

   cout << "\nProgrammed by Minho Cha" << endl;

  return 0;

}

