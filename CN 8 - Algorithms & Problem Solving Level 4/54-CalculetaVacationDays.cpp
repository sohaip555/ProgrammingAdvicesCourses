#include <iostream>
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

int DayNumber(int Year, int Month, int Day)
{

    int a = (14 - Month) / 12;
    int y = Year - a;
    int m = Month + (12 * a) - 2;

    int d = (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    return d;     
}

int DayNumber(stDate Date)
{

    // int a = (14 - Date.Month) / 12;
    // int y = Date.Year - a;
    // int m = Date.Month + (12 * a) - 2;
    // int d = (Date.Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;

    return DayNumber(Date.Year, Date.Month, Date.Day);     
}

string GetWeekDay(int Day)
{

    string Names[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return Names[Day];
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

bool IsLastDayInWeek(int NumberOfDayInWeek)
{
    return NumberOfDayInWeek == 6;
}

bool IsWeekend(int NumberOfDayInWeek)
{
    return NumberOfDayInWeek == 6 || NumberOfDayInWeek == 5;
}

bool IsBusinessDay(int NumberOfDayInWeek)
{
    return !IsWeekend(NumberOfDayInWeek);
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

int CalculetaVacationDays(stDate Date1, stDate Date2)
{
    int DaysOfVacation = 0;

    while (GetDifferentInDeed(Date1, Date2, 1) != 0)
    {
        int Day = DayNumber(Date1);

        if (!IsWeekend(Day))
            DaysOfVacation++;

        Date1 = IncreaseDateByOneDay(Date1);
    }
    
    return DaysOfVacation;
    
}

int main()
{

    cout << "\n\nVacation Starts:\n";
    stDate Date1 = ReadFullDate();

    cout << "\n\nVacation Ends:\n";
    stDate Date2 = ReadFullDate();

    int NumberOfDayInWeek = DayNumber(Date1.Year, Date1.Month, Date1.Day);
    string NameOfDay = GetWeekDay(NumberOfDayInWeek);
    cout << "\n\nVacation From : " << NameOfDay
    << " , " << Date1.Day << "\\" << Date1.Month << "\\" << Date1.Year << endl;
    
    NumberOfDayInWeek = DayNumber(Date2.Year, Date2.Month, Date2.Day);
    NameOfDay = GetWeekDay(NumberOfDayInWeek);
    cout << "Vacation To : " << NameOfDay
    << " , " << Date2.Day << "\\" << Date2.Month << "\\" << Date2.Year << endl;

    int DaysOfVacation = CalculetaVacationDays(Date1, Date2);
    cout << "\n\nActually vacation day: " << DaysOfVacation << endl;


    system("pause>0");
    return 0;

}