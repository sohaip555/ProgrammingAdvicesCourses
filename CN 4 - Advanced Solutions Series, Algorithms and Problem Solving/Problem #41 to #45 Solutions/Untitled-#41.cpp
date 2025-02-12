#include <iostream>
using namespace std;

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

float FromHourToWeek(float NumberOfHours)
{
    return NumberOfHours / 24;
}

void PrintResult(string Message, float Result)
{
    cout << Message << Result;
}

int main(){

    float NumberOfHours, NumberOfWeeks;
    NumberOfHours = ReadPositiveNumber("Please enter number of hours");
    NumberOfWeeks = FromHourToWeek(NumberOfHours);
    PrintResult("Number of weeks is: ", NumberOfWeeks);

}