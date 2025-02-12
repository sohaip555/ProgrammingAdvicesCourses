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

int DaysOfMonth(int Year, int Month)
{
    short Arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    return (Month == 2) ? (IsLeapYears(Year) ? 29 : 28) : Arr[Month - 1];
}

int main()
{
    int Year = Mystd::ReadPositiveNumber("Please enter a year to check?");
    int Month = ReadMonth();
    
    cout << "\n\nNumbet of Days    in Month is " << DaysOfMonth(Year, Month);
    system("pause>0");
    
}