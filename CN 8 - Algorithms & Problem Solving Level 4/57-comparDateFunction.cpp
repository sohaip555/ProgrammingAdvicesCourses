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

int main()
{
    int Days;
    stDate Date1 = ReadFullDate();
    stDate Date2 = ReadFullDate();

    enDateCombar Combar = CombarDateFunction(Date1, Date2) ;

    cout << "\n\nCombar Result = " << Combar << endl; 
    

    system("pause>0");
    return 0;

}