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

stDate IncreaseDateByXDay(stDate Date, int Days)
{
    for (int i = 0; i < Days; i++)
    {
        Date = IncreaseDateByOneDay(Date);
    }

    return Date;
}

stDate IncreaseDateByOneWeek(stDate Date)
{
    Date = IncreaseDateByXDay(Date, 7);

    return Date;
}

stDate IncreaseDateByXWeek(stDate Date, int Week)
{

    for (int i = 0; i < Week; i++)
    {
        Date = IncreaseDateByOneWeek(Date);
    }
    
    return Date;
}

stDate IncreaseDateByOneMonth(stDate Date)
{
    int i = 1;
    int j = Date.Day;
    Date = IncreaseDateByXWeek(Date, 4);

    while (i != j)
    {
        Date = IncreaseDateByOneDay(Date);
        i = Date.Day;
    }
    
    return Date;
}

stDate IncreaseDateByXMonth(stDate Date, int Month)
{   

    for (int i = 1; i <= Month; i++)
    {
        Date = IncreaseDateByOneMonth(Date);
    }
    
    return Date;
}

stDate IncreaseDateByOneYear(stDate Date)
{
    Date = IncreaseDateByXMonth(Date, 12);

    return Date;
}

stDate IncreaseDateByXYear(stDate Date, int Year)
{
    for (int i = 1; i < Year; i++)
    {
        Date = IncreaseDateByOneYear(Date);
    }

    return Date;
}

stDate IncreaseDateByXYearFaster(stDate Date, int Year)
{

    int Days = Date.Day;
    int Month = Date.Month;
    
    for (int i = 1; i < 2; i)
    {
        if (Date.Month == 12 && Date.Day == 31)
        {
            Date = IncreaseDateByOneDay(Date);
            break;
        }
        Date = IncreaseDateByOneDay(Date);
    }

    Date.Year += Year - 1;
    Date = IncreaseDateByXMonth(Date, Month - 1);
    Date = IncreaseDateByXDay(Date, ++Days);

   
    return Date;
}

stDate IncreaseDateByOneDecade(stDate Date)
{
    Date = IncreaseDateByXYearFaster(Date, 10);

    return Date; 
}

stDate IncreaseDateByXDecade(stDate Date, int Decade)
{
    for (int i = 0; i < Decade; i++)
    {
        Date = IncreaseDateByOneDecade(Date);
    }
    
    return Date;
}

int main()
{
    stDate Date = ReadFullDate() ;

    Date = IncreaseDateByOneDay(Date);
    cout << "\n\n01-Date after adding[1] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXDay(Date, 10);
    cout << "\n\n02-Date after adding[10] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneWeek(Date);
    cout << "\n\n03-Date after adding[1] Week is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXWeek(Date, 10);
    cout << "\n\n04-Date after adding[10] Week is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneMonth(Date);
    cout << "\n\n05-Date after adding[1] Month is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXMonth(Date, 5);
    cout << "\n\n06-Date after adding[5] Month is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneYear(Date);
    cout << "\n\n07-Date after adding[1] Year is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXYear(Date, 10);
    cout << "\n\n08-Date after adding[10] Year is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByXYearFaster(Date, 10);
    cout << "\n\n09-Date after adding[10] Year (faster) is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = IncreaseDateByOneDecade(Date);
    cout << "\n\n10-Date after adding[1] Decade is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;


    // cout << "\n\n11-Date after adding[1] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;


    // cout << "\n\n12-Date after adding[1] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;


    // cout << "\n\n13-Date after adding[1] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;


    // cout << "\n\n14-Date after adding[1] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;



    system("pause>0");
    return 0;

}