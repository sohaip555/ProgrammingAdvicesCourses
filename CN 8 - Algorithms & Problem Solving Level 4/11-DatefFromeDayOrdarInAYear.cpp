#include <iostream>
#include <iomanip>
#include <string>
#include "../My_Library/Mystd.h"
using namespace std;

struct stDate
{
    int Year;
    int Munth;
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

stDate DateFromDayOrdarInAYear(int Year, int NumberDay)
{
    stDate Date;
    int MunthOfDay;

    Date.Year = Year;
    Date.Munth = 1;

    while (true)
    {
        MunthOfDay = DaysOfMonth(Year, Date.Munth);
        if (NumberDay > MunthOfDay)
        {
            NumberDay -= MunthOfDay;
            Date.Munth ++;
        }else
        {
            Date.Day = NumberDay;
            break;
        }
    }
    
    return Date;
}

int main()
{
    stDate Date;
    int DaysFromTheBegining;
    int Days = ReadDayInMonth();
    int Month = ReadMonth();
    int Year = Mystd::ReadPositiveNumber("Please enter a year ?");

    DaysFromTheBegining = DaysFromTheBeginingOfYear(Year, Month, Days);

    cout << "\n\nNumber of Days From The Begining Of Year is " << DaysFromTheBegining << endl;


    Date = DateFromDayOrdarInAYear(Year, DaysFromTheBegining);

    cout << "\n\nDate for [" << DaysFromTheBegining << "] is: " << Date.Day << "/" << Date.Munth << "/" << Date.Year;
    system("pause>0");
    return 0;

}