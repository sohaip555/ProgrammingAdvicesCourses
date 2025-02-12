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

int DaysFromTheBeginingOfYear(int Year, int Month, int Day)
{
    int sum = 0;
    for (int i = 1; i < Month; i++)
    {
        sum = sum + DaysOfMonth(Year, i);
    }
    return sum + Day;
 
}

stDate DecreaseDateByOneDay(stDate Date)
{
    if (Date.Day == 1)
    {
        if (Date.Month == 1)
        {
            Date.Day = 31;
            Date.Month = 12;
            Date.Year--;
        }
        else
        {
            Date.Day = DaysOfMonth(Date.Year, Date.Month - 1);
            Date.Month--;
        }
    }
    else
    {
        Date.Day--;
    }

    return Date;
}

stDate DecreaseDateByXDay(stDate Date, int Days)
{
    for (int i = 0; i < Days; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    
    return Date;
}

stDate DecreaseDateByOneWeek(stDate Date)
{
    for (int i = 0; i < 7; i++)
    {
        Date = DecreaseDateByOneDay(Date);
    }
    
    return Date;
}

stDate DecreaseDateByXWeek(stDate Date, int Weeks)
{
    for (int i = 0; i < Weeks; i++)
    {
        Date = DecreaseDateByOneWeek(Date);
    }

    return Date;
}

stDate DecreaseDateByOneMonth(stDate Date)
{
    if (Date.Month == 1)
    {
        Date.Month = 12;
        Date.Year--;
    }
    else
    {
        Date.Month--;
    }

    return Date;
}

stDate DecreaseDateByXMonth(stDate Date, int Months)
{
    for (int  i = 0; i < Months; i++)
    {
        Date = DecreaseDateByOneMonth(Date);
    }

    int NumberOfDaysInMonth = DaysOfMonth(Date.Year, Date.Month);

    if (Date.Day > NumberOfDaysInMonth)
    {
        Date.Day = NumberOfDaysInMonth;
    }
    
    
    return Date;
}

stDate DecreaseDateByOneYear(stDate Date)
{
    Date.Year--;
    
    return Date;
}

stDate DecreaseDateByXYear(stDate Date, int  Years)
{
    for (int i = 0; i < Years; i++)
    {
        Date = DecreaseDateByOneYear(Date);
    }
    
    return Date;
}

stDate DecreaseDateByXYearFaster(stDate Date, int  Years)
{
    Date.Year -= Years;

    return Date;
}

stDate DecreaseDateByOneDecade(stDate Date)
{
    Date.Year -= 10;
    
    return Date;
}

stDate DecreaseDateByXDecade(stDate Date, int  Decades)
{
    for (int i = 0; i < Decades; i++)
    {
        Date = DecreaseDateByOneDecade(Date);
    }
    
    return Date;
}

stDate DecreaseDateByXDecadeFaster(stDate Date, int  Decades)
{
    Date.Year -= Decades * 10;

    return Date;
}

stDate DecreaseDateByOneCentury(stDate Date)
{
    Date.Year -= 100;

    return Date;
}

stDate DecreaseDateByOneMillennium(stDate Date)
{
    Date.Year -= 1000;

    return Date;
}

int main()
{
    stDate Date = ReadFullDate() ;

    Date = DecreaseDateByOneDay(Date);
    cout << "\n\n01-Date after Subtracting[1] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXDay(Date, 10);
    cout << "\n\n02-Date after Subtracting[10] days is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByOneWeek(Date);
    cout << "\n\n03-Date after Subtracting[1] Week is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXWeek(Date, 10);
    cout << "\n\n04-Date after Subtracting[10] Week is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByOneMonth(Date);
    cout << "\n\n05-Date after Subtracting[1] Month is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXMonth(Date, 5);
    cout << "\n\n06-Date after Subtracting[5] Month is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByOneYear(Date);
    cout << "\n\n07-Date after Subtracting[1] Year is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXYear(Date, 10);
    cout << "\n\n08-Date after Subtracting[10] Year is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXYearFaster(Date, 10);
    cout << "\n\n09-Date after Subtracting[10] Year (faster) is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByOneDecade(Date);
    cout << "\n\n10-Date after Subtracting[1] Decade is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXDecade(Date, 10);
    cout << "\n\n11-Date after Subtracting[10] Decade is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByXDecadeFaster(Date, 10);
    cout << "\n\n12-Date after Subtracting[10] Decade is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByOneCentury(Date);
    cout << "\n\n13-Date after Subtracting[1] Century is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;

    Date = DecreaseDateByOneMillennium(Date);
    cout << "\n\n14-Date after Subtracting[1] Millennium is : "<< Date.Day << "/" << Date.Month << "/" << Date.Year;



    system("pause>0");
    return 0;

}