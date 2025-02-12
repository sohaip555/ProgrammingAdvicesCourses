#include <iostream>
#include <Cmath>
using namespace std;

struct Time
{
    short NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

float Days_to_Secinds(float Time)
{
    return Time * 24 * 60 * 60;
}

float Hours_to_Secinds(float Time)
{
    return Time * 60 * 60;
}

float Minutes_to_Secinds(float Time)
{
    return Time * 60;
}

void PrintResult(float Result)
{
    cout << Result;
}

int main(){

Time Time1;

    short NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
    int Total;

    Time1.NumberOfDays = ReadPositiveNumber("Please enter your Days ");
    Time1.NumberOfHours = ReadPositiveNumber("Please enter your Hours ");
    Time1.NumberOfMinutes = ReadPositiveNumber("Please enter your Minutes ");
    Time1.NumberOfSeconds = ReadPositiveNumber("Please enter your Seconds ");

    Total = Days_to_Secinds(Time1.NumberOfDays) + Hours_to_Secinds(Time1.NumberOfHours)
    + Minutes_to_Secinds(Time1.NumberOfMinutes)+ Time1.NumberOfSeconds;

    PrintResult(Total);
}