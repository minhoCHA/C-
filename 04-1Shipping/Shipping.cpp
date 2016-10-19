/**
* Class: CS 110A
* Description: Input a customer's total purchase amount. Tax on the purchase is 7.5% and if the customer's purchase is $50.00 or more, shipping is free. Otherwise, shipping is a flat $5.99. Output's are purchase amount, tax, shipping and total.
* Due Date: Sep/23/2015
* Name: Minho Cha
* File Name: Shipping.cpp
* Assignment #4
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

   double price, tax, total, shipping;  

   cout << "Enter purchase price:  ";
   cin >>price;

   if ( price <= 50 )
    shipping = 5.99;
   else
    shipping = 0.00;
 
   tax = price*0.075;
   total = price + tax + shipping;

   cout << " Purchase Price:" << setw(10) << setprecision(2)<<  fixed  << price << endl << "            Tax:" << setw(10)  <<setprecision(2) << fixed << tax << endl
<< "\tShipping:" << setw(9) << shipping << endl << "          Total:" << setw(10)  <<setprecision(2)<< fixed  << total;



   cout << "\nProgrammed by Minho Cha" << endl;

   return 0;
}
