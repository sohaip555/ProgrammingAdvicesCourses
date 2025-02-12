#include <iostream>
#include <Cmath>
using namespace std;


int main(){

   int NumberOfdays , NumberOfHours, NumberOfMinutes, NumberOfSeconde, Resolt;

   cout << "Please enter the number of seconde" << endl;
   cin >> NumberOfSeconde;

   NumberOfdays = NumberOfSeconde / 86400;
   NumberOfSeconde = NumberOfSeconde % 86400;

   NumberOfHours = NumberOfSeconde / 3600;
   NumberOfSeconde = NumberOfSeconde % 3600;

   NumberOfMinutes = NumberOfSeconde / 60;
   NumberOfSeconde = NumberOfSeconde % 60;

   cout << NumberOfdays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconde;

   return 0;
}