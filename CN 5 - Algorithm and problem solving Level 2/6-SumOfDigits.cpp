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

int SumOfDigits(int Number)
{
    int Remainder = 0, sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        sum += Remainder;
        Number = Number / 10;
    }
    return sum;
}

void PrintResult(int Number, string Message)
{
    cout << Message << Number;
}

int main()
{

    int Number;
    Number = ReadPositiveNumber("Please enter a Positiv number");
    PrintResult(SumOfDigits(Number), "Sum of digits = ");

}