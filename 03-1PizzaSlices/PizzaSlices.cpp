/**
* Class: CS 110A
* Description: About PizzaSlices
* Due Date: Sep/16/2015
* Name: Minho Cha
* File Name: PizzaSlices.cpp
* Assignment #3
*/



#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double diameter, pi, r, Area, slice, Answer;


   cout << "Enter pizza diameter: ";
   cin >> diameter;

   pi = 3.14159;
   r = diameter/2;
   Area = pi*r*r;
   slice = 14.125;
   Answer = Area/slice;

   cout << setprecision(1)<< fixed <<Answer <<" slices";

   cout << "\nProgrammed by Minho Cha" << endl;

  return 0;

}

