#include <iostream>
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
    } while (Day < 1 || Day > 31);

    return Day;
    
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

int main()
{
    int Year = Mystd::ReadPositiveNumber("Please enter a year to check?");
    int Month = ReadMonth();
    int Day = ReadDayInMonth();

    int DayInWeek = DayNumber(Year, Month, Day);
    
    string DayName = GetWeekDay(DayInWeek);

    cout << "\n\n";
    cout << "Date        : " << Day << "\\" << Month << "\\" << Year << endl;
    cout << "Dya Order   : " << DayInWeek << endl;
    cout << "Day Name    : " << DayName << endl;

    system("pause>0");
    return 0;

}