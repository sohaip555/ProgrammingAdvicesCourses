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

        cout << "\nPlease enter a month? ";
        cin >> Month;

    return Month;
    
}

int ReadDayInMonth()
{
    int Day;


        cout << "\nPlease enter a Day ? ";
        cin >> Day;


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

bool IsLastDayInMonth(stDate Date)
{
    return DaysOfMonth(Date.Year, Date.Month) == Date.Day; 
}

bool IsLastMonthInYear(int Month)
{
    return Month == 12;
}

stDate IncreaseDateByOneDay(stDate Date, int Days)
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

bool IsValidateDate(stDate Date)
{
    if (Date.Month < 1 || Date.Month > 12)
    {
        return 0;
    }

    if (Date.Day > DaysOfMonth(Date.Year, Date.Month) || Date.Day < 1)
    {
        return 0;
    }
    
    return 1;;
}

int main()
{
    int Days;
    stDate Date = ReadFullDate() ;

    if (IsValidateDate(Date))
    {
        cout << "\n\nYes, Date is a valide date" << endl;
    }
    else
    {
        cout << "\n\nNo, Date is not a valide date" << endl;
    }
    
    system("pause>0");
    return 0;

}