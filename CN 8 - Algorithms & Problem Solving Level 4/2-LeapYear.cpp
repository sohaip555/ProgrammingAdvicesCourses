#include <iostream>
#include "../My_Library/Mystd.h"
using namespace std;

bool IsLeapYears(int Year)
{
    if (Year % 400 == 0)
    {
        return 1;
    }
    else if (Year % 100 == 0)
    {
        return 0;
    }
    else if (Year % 4 == 0)
    {
        return 1;
    }
    
    return 0;
    
}

int main()
{
    int Year = Mystd::ReadPositiveNumber("Please enter number");

    if (IsLeapYears(Year))
    {
        cout << "\nYes, Year [" << Year << "] is a leap year\n";
    }
    else
    {
        cout << "\nNo, Year [" << Year << "] is not a leap year\n";
    }
    
}