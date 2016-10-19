/**
* Class: CS 110A
* Description: About Restaurant Bill
* Due Date: Sep/09/2015
* Name: Minho Cha
* File Name: RestaurantBill.cpp
* Assignment #2
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double charge, tax, tip, total;

   cout << "Enter the charge for the meal:  ";
   cin >> charge;
   tax = charge * 0.0675;
   tip = (tax + charge) * 0.15;
   total = charge + tax + tip;
   cout << "Meal Charge: $" << setprecision(3)<< charge << endl;
   cout << "Tax:         $" << setprecision(6)<< tax << endl;
   cout << "Tip:         $" << setprecision(8)<< tip << endl;
   cout << "Total:       $" << setprecision(9)<< total << endl;

   cout << "Programmed by Minho Cha"<< endl;
   return 0;

}
