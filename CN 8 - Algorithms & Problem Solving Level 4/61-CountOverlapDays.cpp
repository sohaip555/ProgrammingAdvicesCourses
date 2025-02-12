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

    cout << "\nEnter Start Date" << endl;
    Priods.StartDate = ReadFullDate();
    cout << "\nEnter End Date";
    Priods.EndDate = ReadFullDate();

    return Priods;
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

bool IsDate1LessThenDate2(stDate Date1, stDate Date2)
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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{

    return Date1.Year == Date2.Year ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? 1 : 0) : 0 ) : 0;
}

bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
    return (!IsDate1LessThenDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}

enDateCombar CombarDateFunction(stDate Date1, stDate Date2)
{
    
    if (IsDate1AfterDate2(Date1, Date2))
    {
        return enDateCombar::After;
    }

    if (IsDate1EqualDate2(Date1, Date2))
    {
        return enDateCombar::Equal;
    }
    
    if (IsDate1LessThenDate2(Date1, Date2))
    {
        return enDateCombar::Before;
    }
    
    return enDateCombar::Equal;
}

bool IsOverlapPeriods(stPeriods Period1, stPeriods Period2)
{
    if (
    CombarDateFunction(Period2.EndDate, Period1.StartDate) == enDateCombar::Before 
    || 
    CombarDateFunction(Period2.StartDate, Period1.EndDate) == enDateCombar::After )
    {
        return false;
    }
    else
    {
        return true;
    }

}

int CountOverlapDays(stPeriods Period1, stPeriods Period2)
{
    int IsOverlapDays = 0;

    while (IsOverlapPeriods(Period1, Period2))
    {
        IsOverlapPeriods(Period1, Period2);
        Period2.StartDate = IncreaseDateByOneDay(Period2.StartDate);
        Period1.StartDate = IncreaseDateByOneDay(Period1.StartDate);
        IsOverlapDays++;
    }
        
    return --IsOverlapDays;
    
}

int main()
{
    stPeriods Periods1;
    stPeriods Periods2;

    cout << "Enter Priods1:" << endl;
    Periods1 = ReadPeriods();

    cout << "\n\nEnter Priods2:" << endl;
    Periods2 = ReadPeriods();


    cout << "\n\nOverlap days count is : " << CountOverlapDays(Periods1, Periods2);
    



    system("pause>0");
    return 0;

}