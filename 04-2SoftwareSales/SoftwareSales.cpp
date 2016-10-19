/**
* Class: CS 110A
* Description: A software company sells a package that retails for $99. Quantity discounts are like this; quantity:discount, 10-19 : 20%, 20-49 : 30%, 50-99 : 40%, 100 or more : 50%. Input the units sold and it should be greater than 0. Output's are the amount of the units sold, discount, cost.
* Due Date: Sep/23/2015
* Name: Minho Cha
* File Name: SoftWareSales.cpp
* Assignment #4
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   
   double quantity, unit, discount, cost, price;

   price = 99;

   cout << "Enter the units sold: ";
   cin >> quantity;

   if (quantity >= 100 && quantity > 100)
    discount=quantity*price*0.5;
   else if (quantity <=99 && quantity >=50)
    discount=quantity*price*0.4;
   else if (quantity <=49 && quantity >=20)
    discount=quantity*price*0.3;
   else if (quantity <=19 && quantity >=10)
    discount=quantity*price*0.2;
   else if (quantity <=0)
    cout << "Units sold must be greater than zero.";


   cost = quantity*price-discount;

   if (quantity > 0)

   cout << "Units sold: " << quantity << endl
<< "Discount: $" << setprecision(2) << fixed <<discount << endl                
<< "Cost: $" << setprecision(2) << fixed << cost;

   cout << "\nProgrammed by Minho Cha" << endl;

  return 0;

}

