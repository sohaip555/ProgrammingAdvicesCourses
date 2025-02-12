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

void PrintReverseNumber(int Number)
{
    int Remainder = 0, x = 0;

    while (Number > 0)
    {

        Remainder = Number % 10;
        Number = Number / 10;
        x = x * 10 + Remainder;
    }
    cout << x;
}

int main()
{
    int Number;
    Number = ReadPositiveNumber("Please enter a number");
    PrintReverseNumber(Number);
}