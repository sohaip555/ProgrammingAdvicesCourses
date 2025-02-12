#include <iostream>
#include <Cmath>
using namespace std;

struct time
{
    short NumberOfdays , NumberOfHours, NumberOfMinutes, NumberOfSeconde;
    int Resolt;
};

int TimeToDays(int NumberOfdays, int NumberOfSeconde)
{
    NumberOfdays = NumberOfSeconde / 86400;
    NumberOfSeconde = NumberOfSeconde % 86400;

}

int TimeToHours(int NumberOfHours, int NumberOfSeconde){}

int TimeToMinutes(int NumberOfMinutes, int NumberOfSeconde){}

int TimeToSeconde(int NumberOfSeconde){}

int MOD(int number){}


int main(){

time time1;
time1.NumberOfdays;
time1.NumberOfHours;
time1.NumberOfMinutes;
time1.NumberOfSeconde;

cout << "Please enter the number of seconde" << endl;
cin >> time1.NumberOfSeconde;


time1.NumberOfdays = time1.NumberOfSeconde / 86400;

time1.NumberOfSeconde = time1.NumberOfSeconde % 86400;

time1.NumberOfHours = time1.NumberOfSeconde / 3600;

time1.NumberOfSeconde = time1.NumberOfSeconde % 3600;

time1.NumberOfMinutes = time1.NumberOfSeconde / 60;

time1.NumberOfSeconde = time1.NumberOfSeconde % 60;


cout << "The time is: " << time1.NumberOfdays << ":" << time1.NumberOfHours << ":"
 << time1.NumberOfMinutes << ":" << time1.NumberOfSeconde;




   return 0;
}