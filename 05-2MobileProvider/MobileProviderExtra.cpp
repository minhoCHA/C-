/**
* Class: CS 110A
* Description :
1. The program calculates your monthly bill.
2. It will ask you which package has purchased and how many minutes were used.
3. Then it will display the total amount due.
4. And it will displays how much money Package A customers would save if they purchased packages B or C.
5. And also, how much Package B customers would save if they purchased Package C.
6. If there would ne no savings, no message will printed.


ref.
-Package A : For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute.
-Package B : For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute.
-Package C : For $69.99 per month unlimited minutes provided.

* Due Date: Sep/28/2015
* Name: Minho Cha
* File Name: MobileProviderExtra.cpp
* Assignment #5
*/


#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
   int choice, minute, total;
   
   double A_PRICE = 39.99;
   double B_PRICE = 59.99;
   double C_PRICE = 69.99;

   cout << "\nSelect a subscription package:" << endl;
   cout << "\n1. Package A:" << endl;
   cout << "2. Package B:" << endl;
   cout << "3. Package C:" << endl;
   cout << "4. Quit\n\n" << endl;
   cin >> choice;


  switch (choice)
    {
        case 1 : cout << "How many minutes were used? ";

         cin >> minute;

          if ( minute <=450)
           cout << "The total amount due is $" << A_PRICE << endl;

          else
           cout << "The total amount due is $" << A_PRICE + (minute-450)*0.45 << endl;

                break;

        case 2 : cout << "How many minutes were used? ";

         cin >> minute;

          if (minute <=450)
           { cout << "The total amount due is $" << B_PRICE << endl;
	     cout << "Savings with package A: $" << setprecision(2) << fixed << B_PRICE-A_PRICE << endl;}

          else if ( minute > 450 && minute <=900)
	   cout << "The total amount due is $" << B_PRICE << endl;

	  else
           cout << "The total amount due is $" << B_PRICE + (minute-900)*0.40 << endl;

                break;

        case 3 : cout << "How many minutes were used? ";

         cin >> minute;
	  
	  if ( minute <=450 )
	   { cout << "The total amount due is $" << C_PRICE << endl;
	     cout << "Savings with package A: $" << setprecision(2) << fixed << C_PRICE-A_PRICE << endl;
	     cout << "Savings with package B: $" << setprecision(2) << fixed << C_PRICE-B_PRICE << endl;}

	  else if ( minute > 450 && minute <= 900)
	   { cout << "The total amount due is $" << C_PRICE << endl;
	     cout << "Savings with package B: $" << setprecision(2) << fixed << C_PRICE-B_PRICE << endl;}
	  
	  else
           cout << "The total amount due is $" << C_PRICE << endl;
           
		break;


        default :
         cout << "You should select number between 1-3" <<endl;


    }


   cout << "\n\nProgrammed by Minho Cha" << endl;

   return 0;
}

