#include <iostream>
#include <iomanip>
#include "../My_Library/Mystd.h"
using namespace std;

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
    } while (Month < 1 || Month > 12);

    return Month;
    
}

int ReadDayInMonth()
{
    int Day;

    do
    {
        cout << "\nPlease enter a Day to check? ";
        cin >> Day;
    } while (Day <= 1 || Day >= 31);

    return Day;
    
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

string GetWeekDay(int Day)
{

    string Names[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    return Names[Day];
}

string GetMonthName(int Month)
{
    string Names[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Au", "Sep", "Oct", "Nov", "Dec"};
    return Names[Month - 1];
}

void PrintMonthCalendar(int Year, int Month)
{

    cout << "  _______________"<< GetMonthName(Month) << "_______________\n\n";
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

    int NumberOfDaysInMonth = DaysOfMonth(Year, Month);

    int i;
    for ( i = 0; i < DayNumber(Year, Month, 1); i++)
        cout << "     ";


    for (int j = 1; j <= NumberOfDaysInMonth; j++)
    {
        printf("%5d", j);

        if (++i > 6)
        {
          cout << "\n";
          i = 0;  
        }
           
    }
    

    cout << "\n  _________________________________\n";

}

int main()
{
    int Year = Mystd::ReadPositiveNumber("Please enter a year to check?");
    int Month = ReadMonth();

    PrintMonthCalendar(Year, Month);

    system("pause>0");
    return 0;

}