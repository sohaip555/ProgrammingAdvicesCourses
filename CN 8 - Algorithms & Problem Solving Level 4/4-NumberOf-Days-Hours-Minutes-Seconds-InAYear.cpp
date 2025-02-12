#include <iostream>
#include "../My_Library/Mystd.h"
using namespace std;

struct stTime
{
    int Days;
    int Hours;
    int Minutes;
    int Seconds;

};

bool IsLeapYears(int Year)
{

    return ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0);
    
}

int DaysOfYear(int Year)
{
    return IsLeapYears(Year) ? 366 : 365;
}

int HoursOfMonth(int Year)
{
    return DaysOfYear(Year) * 24;
}

int MinutesOfMonth(int Year)
{
    return HoursOfMonth(Year) * 60;
}

int SecondsOfMinutes(int Year)
{
    return MinutesOfMonth(Year) * 60;
}

stTime NumberOfDaysHoursMinutesSecondsInAMunth(int Year)
{
    stTime Time;

    if (IsLeapYears(Year))
        Time.Days = 366;
    else
        Time.Days = 365;

    Time.Hours = HoursOfMonth(Time.Days) ;
    Time.Minutes = MinutesOfMonth(Time.Hours);
    Time.Seconds = SecondsOfMinutes(Time.Minutes);

    return Time;
}


int main()
{
    int Year = Mystd::ReadPositiveNumber("Please enter number");

    stTime Time = NumberOfDaysHoursMinutesSecondsInAMunth(Year);

    cout << "\nNumber Of Deays in year [" << Year << "] is " << Time.Days << endl;
    cout << "Number of Hours in year [" << Year << "] is " << Time.Hours << endl;
    cout << "Number of Minutes in year [" << Year << "] is " << Time.Minutes << endl;
    cout << "Number of seconds in year [" << Year << "] is " << Time.Seconds << endl;


    
}