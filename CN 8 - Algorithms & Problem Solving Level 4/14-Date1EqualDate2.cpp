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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{

    return Date1.Year == Date2.Year ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? 1 : 0) : 0 ) : 0;
}

int main()
{
    int Days;
    stDate Date1 = ReadFullDate();
    stDate Date2 = ReadFullDate();


    if (IsDate1EqualDate2(Date1, Date2))
    {
        cout << "\n\nYes, Date1 is Equal Date2" << endl;
    }
    else
    {
        cout << "\n\nNO, Date1 is not Equal Date2" << endl;
    }
    

    system("pause>0");
    return 0;

}