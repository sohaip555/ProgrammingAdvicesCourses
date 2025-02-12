#include <iostream>
#include <iomanip>
#include <string>
#include "../My_Library/Mystd.h"
using namespace std;

struct stDate
{
    int Year;
    int Month;
    int Day;
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
        cout << "\nPlease enter a month? ";
        cin >> Month;
    } while (Month < 1 || Month > 12);

    return Month;
    
}

int ReadDayInMonth()
{
    int Day;

    do
    {
        cout << "\nPlease enter a Day ? ";
        cin >> Day;
    } while (Day < 1 || Day > 31);

    return Day;
    
}

stDate ReadFullDate()
{
    stDate Date;

    Date.Day = ReadDayInMonth();
    Date.Month = ReadMonth();
    Date.Year = Mystd::ReadPositiveNumber("Please enter a year ?");    

    return Date;
}

int DaysOfMonth(int Year, int Month)
{
    short Arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2) ? (IsLeapYears(Year) ? 29 : 28) : Arr[Month - 1];
}

int DaysFromTheBeginingOfYear(int Year, int Month, int Day)
{
    int sum = 0;
    for (int i = 1; i < Month; i++)
    {
        sum = sum + DaysOfMonth(Year, i);
    }
    return sum + Day;
 
}

bool IsLastDayInMonth(stDate Date)
{
    return DaysOfMonth(Date.Year, Date.Month) == Date.Day; 
}

bool IsLastMonthInYear(int Month)
{
    return Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date)
{
    if (IsLastDayInMonth(Date))
    {
        if (IsLastMonthInYear(Date.Month))
        {
            Date.Day = 1;
            Date.Month = 1;
            Date.Year++;
        }
        else
        {
            Date.Day = 1;
            Date.Month++;
        }
    }
    else
    {
        Date.Day++;
    }

    return Date;
}

int GetDifferentInDeed(stDate Date1, stDate Date2, bool EncludeEndDay = 0)
{
    int Counter = 0;

    for (int i = 0; i < Date2.Year - Date1.Year; i++)
    {
        if (IsLeapYears(Date1.Year + i))
        {
            Counter += 366;
        }
        else
        {
            Counter += 365;
        }
    }

    Counter -= DaysFromTheBeginingOfYear(Date1.Year, Date1.Month, Date1.Day);

    Counter += DaysFromTheBeginingOfYear(Date2.Year, Date2.Month, Date2.Day);

    return EncludeEndDay ? Counter + 1: Counter;
    
}

int main()
{
    stDate Date1 = ReadFullDate() ;
    stDate Date2 = ReadFullDate() ;


    cout << "\n\nDeffrene is: " << GetDifferentInDeed(Date1, Date2) << " Day(s)." << endl;
    cout << "Deffrene (Encluding End Day) is: " << GetDifferentInDeed(Date1, Date2, 1) << " Day(s)." << endl;
    system("pause>0");
    return 0;

}