#include <iostream>
#include "../My_Library/Mystd.h"
using namespace std;

bool IsLeapYears(int Year)
{

     
    return Year % 400 == 0 ? Year = 1 : Year % 100 == 0 ? Year =  0 : Year =  1;
    
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