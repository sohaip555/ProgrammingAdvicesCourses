#include <iostream>
#include <Cmath>
using namespace std;

struct Time
{
    int NumberOfdays = 0 , NumberOfHours = 0, NumberOfMinutes = 0, NumberOfSeconde = 0;
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

void SecondsToDays(int &NumberOfdays, int &NumberOfSeconde)
{
    NumberOfdays = NumberOfSeconde / 86400;
    NumberOfSeconde = NumberOfSeconde % 86400;
}

void SecandsToHours(int &NumberOfHours, int &NumberOfSeconde)
{
    NumberOfHours = NumberOfSeconde / 3600;
    NumberOfSeconde = NumberOfSeconde % 3600;
}

void SecandsToMinutes(int &NumberOfMinutes, int &NumberOfSeconde)
{
    NumberOfMinutes = NumberOfSeconde / 60;
    NumberOfSeconde = NumberOfSeconde % 60;

}

int main(){

    Time Time1;

    Time1.NumberOfSeconde = ReadPositiveNumber("Please enter the number of seconde"); 

    SecondsToDays(Time1.NumberOfdays, Time1.NumberOfSeconde);
    SecandsToHours(Time1.NumberOfHours, Time1.NumberOfSeconde);
    SecandsToMinutes(Time1.NumberOfMinutes, Time1.NumberOfSeconde);

    cout << "The Time is: " << Time1.NumberOfdays << ":" << Time1.NumberOfHours << ":"
    << Time1.NumberOfMinutes << ":" << Time1.NumberOfSeconde;

    return 0;
}