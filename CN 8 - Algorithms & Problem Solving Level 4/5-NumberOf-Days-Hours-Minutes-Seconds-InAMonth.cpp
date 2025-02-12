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

int ReadMonth()
{
    int Month;

    do
    {
        cout << "\nPlease enter a month to check? ";
        cin >> Month;
    } while (Month <= 1 || Month >= 12);

    return Month;
    
}

int DaysOfMonth(int Month)
{
    return IsLeapYears(Month) ? 29 : 28;

    short Arr[] = {1, 3, 5, 7, 8, 10, 12};

    for (int i = 0; i < 7; i++)
    {
        if (Month == Arr[i])
        {
            return 31;
        }
    }
    return 30;

}

int HoursOfMonth(int Month)
{
    return DaysOfMonth(Month) * 24;
}

int MinutesOfMonth(int Month)
{
    return HoursOfMonth(Month) * 60;
}

int SecondsOfMonth(int Month)
{
    return MinutesOfMonth(Month) * 60;
}

stTime NumberOfDaysHoursMinutesSecondsInAMunth(int Year, int Month)
{
    stTime Time;

    Time.Days = DaysOfMonth(Month);
    Time.Hours = HoursOfMonth(Time.Days) ;
    Time.Minutes = MinutesOfMonth(Time.Hours);
    Time.Seconds = SecondsOfMonth(Time.Minutes);

    return Time;
}


int main()
{
    int Year = Mystd::ReadPositiveNumber("Please enter a year to check?");
    int Month = ReadMonth();
    
    stTime Time = NumberOfDaysHoursMinutesSecondsInAMunth(Year, Month);

    cout << "\nNumber Of Deays in year [" << Month << "] is " << Time.Days << endl;
    cout << "Number of Hours in year [" << Month << "] is " << Time.Hours << endl;
    cout << "Number of Minutes in year [" << Month << "] is " << Time.Minutes << endl;
    cout << "Number of seconds in year [" << Month << "] is " << Time.Seconds << endl;


    
}