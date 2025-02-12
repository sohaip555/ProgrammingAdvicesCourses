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
    } while (Day <= 1 || Day >= 31);

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

stDate AddDayToDate(stDate Date, int Days)
{
    int Remainder = Days + DaysFromTheBeginingOfYear(Date.Year, Date.Month, Date.Day);
    int MonthDay = 0;

    Date.Month = 1;
    while (true)
    {
        MonthDay = DaysOfMonth(Date.Year, Date.Month);
        if (Remainder > MonthDay)
        {
            Remainder -= MonthDay;
            Date.Month++;

            if (Date.Month > 12)
            {
                Date.Month = 1;
                Date.Year++;
            }
            
        }
        else
        {
            Date.Day = Remainder;
            break;
        }
    }
    
    return Date;
}

int main()
{
    int Days;
    stDate Date = ReadFullDate() ;
    cout << "\nHow mane days to add? ";
    cin >> Days;

    Date = AddDayToDate(Date, Days);
    cout << "\n\nDate after adding[" << Days << "] days is : "
    << Date.Day << "/" << Date.Month << "/" << Date.Year;



    system("pause>0");
    return 0;

}