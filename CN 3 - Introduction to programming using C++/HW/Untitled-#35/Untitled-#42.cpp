#include <iostream>
#include <Cmath>
using namespace std;

struct time
{
    short NumberOfdays , NumberOfHours, NumberOfMinutes, NumberOfSeconde;
    int Resolt;
};

int TimeInSeconds(int NumberOfdays, int NumberOfHours, int NumberOfMinutes, int NumberOfSeconde)
{
    NumberOfdays *= 86400;
    NumberOfHours *= 3600;
    NumberOfMinutes *= 60;
    return NumberOfdays + NumberOfHours + NumberOfMinutes + NumberOfSeconde;
}

int main(){

time time1;
time1.NumberOfdays;
time1.NumberOfHours;
time1.NumberOfMinutes;
time1.NumberOfSeconde;
time1.Resolt;

cout << "Please enter the number of days" << endl;
cin >> time1.NumberOfdays;

cout << "Please enter the number of hour" << endl;
cin >> time1.NumberOfHours;

cout << "Please enter the number of minutes" << endl;
cin >> time1.NumberOfMinutes;

cout << "Please enter the number of seconde" << endl;
cin >> time1.NumberOfSeconde;

time1.Resolt = TimeInSeconds(time1.NumberOfdays , time1.NumberOfHours, time1.NumberOfMinutes, time1.NumberOfSeconde);
cout << time1.Resolt;

return 0;
}