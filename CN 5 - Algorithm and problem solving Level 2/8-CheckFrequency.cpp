#include <iostream>
#include <string>
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

int CheckFrequency(short Number, short DigitsToCheck)
{
    short Remainder = 0, Frequency = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == DigitsToCheck)
        {
            Frequency++;
        }
    }
    return Frequency;
}

void PrintResult(int Number, string Message)
{
    cout << Message << Number << endl;
}

int main()
{

    short Number1 = 0, DigitsToCheck = 0, Frequency = 0;
    Number1 = ReadPositiveNumber("Please enter your number");
    DigitsToCheck = ReadPositiveNumber("Please enter the number you want to search");

    Frequency = CheckFrequency(Number1, DigitsToCheck);
    PrintResult(Frequency, "Digits " + to_string(DigitsToCheck) + " frequency is ");
}