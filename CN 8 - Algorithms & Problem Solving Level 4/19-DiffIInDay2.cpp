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

void Swap(stDate& Date1, stDate &Date2)
{
    stDate Timp;

    Timp = Date1;
    Date1 = Date2;
    Date2 = Timp;
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

int GetDifferentInDeed(stDate Date1, stDate Date2, bool EncludeEndDay = 0)
{
    int Counter = 0;
    int SwapFlagValue = 1;

    if (!(IsDate1BeforeThenDate2(Date1, Date2)))
    {
        Swap(Date1, Date2);
        SwapFlagValue = -1;
    }
    

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

    return EncludeEndDay ? ++Counter * SwapFlagValue : Counter * SwapFlagValue;
    
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