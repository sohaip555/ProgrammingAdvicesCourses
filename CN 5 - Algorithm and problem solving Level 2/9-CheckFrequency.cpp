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

int CheckFrequency(int Number, int DigitsToCheck)
{
    int Remainder = 0, Frequency = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        if (DigitsToCheck == Remainder)
        {
            Frequency++;
        }
    }
    return Frequency;
}

void PrintResult(string Message, int Number)
{
    cout << Message << Number << endl;
}

int main()
{

    int Number1 = 0, DigitsToCheck[100], Frequency = 0, countr = 0, i = 1;
    Number1 = ReadPositiveNumber("Please enter your main number");
    DigitsToCheck[countr] = 1;

    do
    {
        countr++;
        DigitsToCheck[countr] = ReadPositiveNumber("Please  the number you want to Check");
        

    } while (DigitsToCheck[countr] != 0); 
    
    do
    {
        Frequency = CheckFrequency(Number1, DigitsToCheck[i]);
        PrintResult("Digits " + to_string(DigitsToCheck[i]) + " frequency is ", Frequency);

        i++;
    } while (i != countr);
    
}