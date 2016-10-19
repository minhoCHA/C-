/**
* Class: CS 110A
* Description:

   * This program will compute and display the charges for a patient's hospital stay.
   * First, the program will ask if the patient was admitted as an in-patient or an out-patient.

   1. If the patient was an in-patient, the following data should be entered:
     - The number of days spent in the hospital
     - The daily rate
     - Hospital medication charges
     - Charges for hospital services(lab tests, etc.)

   2. The program will ask for the following data if the patient was an out-patient:
     - Charges for hospital services(lab tests, etc.)
     - Hospital medication charges

* Due Date: Nov/04/2015
* Name: Minho Cha
* File Name: Hospital.cpp
* Assignment #9
*/

#include <iostream>
#include <iomanip>

using namespace std;

float patient(int days_in, float room_rate, float medication_charges, float labfees_service_charges);
float patient(float medication_charge, float labfees_service_charges);

int main()
{

   char answer;
   int days_in;
   float room_rate, medication_charges, labfees_service_charges, total;

   cout << "This program will compute patient hospital charges.\n";
   cout << "What was the patient type?\n";
   cout << "In-patient or Out-patient? (I or O) ";
    cin >> answer;

     if ( answer == 'I' || answer == 'i' )
     {

      cout << "Number of days in the hospital: ";
       cin >> days_in;
        while ( days_in < 0 ){
         cout << "Days in the hospital must be zero or more. Please re-enter: ";
          cin >> days_in;}
      
      cout << "Daily room rate: $";
       cin >> room_rate;
        while ( room_rate < 0 ){
         cout << "Room rate must be zero or more. Please re-enter: $";
          cin >> room_rate;}

      cout << "Medication charges: $";
       cin >> medication_charges;
        while ( medication_charges < 0 ){
         cout << "Medication charges must be zero or more. Please re-enter: $";
          cin >> medication_charges;}

      cout << "Lab fees and other service charges: $";
       cin >> labfees_service_charges;
        while ( labfees_service_charges < 0 ){
         cout << "Lab fees and other service charges must be zero or more. Please re-enter: $";
          cin >> labfees_service_charges;}

      total = patient(days_in, room_rate, medication_charges, labfees_service_charges);
      
      cout << "\n\nThe total charges are $" << setprecision(2) << fixed << total;

     }


     else if(answer == 'O' || answer == 'o')
     {

      float medication_charges, labfees_service_charges, total;

      cout << "Medication charges: $";
       cin >> medication_charges;
        while ( medication_charges < 0 ){
         cout << "Medication charges must be zero or more. Please re-enter: $";
          cin >> medication_charges;}

      cout << "Lab fees and other service charges: $";
       cin >> labfees_service_charges;
        while ( labfees_service_charges < 0 ){
         cout << "Lab fees and other service charges must be zero or more. Please re-enter: $";
          cin >> labfees_service_charges;}
     
      total = patient(medication_charges, labfees_service_charges);
      
      cout << "\n\nThe total charges are $" << setprecision(2) << fixed << total;

      }

   cout << "\n\nProgrammed by Minho Cha\n";
   
   return 0;
}





float patient(int days_in, float room_rate, float medication_charges1, float labfees_service_charges1)
{

   float totalcharges;
   float temp;

   temp = medication_charges1 + labfees_service_charges1;

   totalcharges = days_in  * room_rate;
   totalcharges += temp;

   return totalcharges;       
}


float patient(float medication_charges, float labfees_service_charges)
{

   float totalcharges;

   totalcharges = medication_charges + labfees_service_charges;
   
   return totalcharges;

}
