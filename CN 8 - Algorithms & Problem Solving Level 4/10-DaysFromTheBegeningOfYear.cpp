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

int main()
{
    int DaysFromTheBegining;
    int Days = ReadDayInMonth();
    int Month = ReadMonth();
    int Year = Mystd::ReadPositiveNumber("Please enter a year ?");

    DaysFromTheBegining = DaysFromTheBeginingOfYear(Year, Month, Days);

    cout << "\n\nNumber of Days From The Begining Of Year is " << DaysFromTheBegining << endl;
    system("pause>0");
    return 0;

}