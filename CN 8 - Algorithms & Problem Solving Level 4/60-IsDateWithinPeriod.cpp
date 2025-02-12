#include <iostream>
#include <iomanip>
#include <string>
#include "../My_Library/Mystd.h"
using namespace std;

enum enDateCombar
{
    Before = -1, Equal = 0, After = 1
};

struct stDate
{
    int Year;
    int Month;
    int Day;
};

struct stPeriods
{
    stDate StartDate;
    stDate EndDate;
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

stPeriods ReadPeriods()
{
    stPeriods Priods;

    cout << "\nEnter start Date" << endl;
    Priods.StartDate = ReadFullDate();
    cout << "\nEnter start Date";
    Priods.EndDate = ReadFullDate();

    return Priods;
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

bool IsDate1BeforeThenDate2(stDate Date1, stDate Date2)
{

    if (Date2.Year > Date1.Year )
    {
        return 1;
    }
    else if (Date1.Year > Date2.Year)
    {
        return 0;
    }

    if (Date2.Month > Date1.Month)
    {
        return 1;
    }
    else if (Date1.Month > Date2.Month)
    {
        return 0;
    }

    if (Date2.Day > Date1.Day)
    {
        return 1;
    }
    else if (Date1.Day > Date2.Day)
    {
        return 0;
    }
    
    return 0;
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

    int Days = 0;
    while (IsDate1BeforeThenDate2(Date1, Date2))
    {
        Days++;
        Date1 = IncreaseDateByOneDay(Date1);
    }

    return EncludeEndDay ? Days++ : Days;
       
}

int PeriodsLengthInDays(stPeriods Periods, bool EncludeEndDay = 0)
{
    int Days = GetDifferentInDeed(Periods.StartDate, Periods.EndDate, EncludeEndDay);
    
    return Days;
}

bool IsDateWithinPeriod(stPeriods Periods, stDate DateToCheck)
{

    return (IsDate1BeforeThenDate2(DateToCheck, Periods.StartDate) 
            ||
            IsDate1BeforeThenDate2(Periods.EndDate, DateToCheck))? 0 : 1;
    
}

int main()
{
    stDate Date;
    stPeriods Periods;

    cout << "\n\nEnter Priods1:" << endl;
    Periods = ReadPeriods();

    cout << "\n\nEnter Date to check: " << endl;
    Date = ReadFullDate();


    if (IsDateWithinPeriod(Periods, Date))
    {
        cout << "\nYes, The date is within period" << endl;
    }
    else
    {
        cout << "\nNo, The date is not within period" << endl;
    }
    


    system("pause>0");
    return 0;

}