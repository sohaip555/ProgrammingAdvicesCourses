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

// void PrintDigitsInReversedOrder(int Number)
// {
//     string str = to_string(Number);
//     int to = str.size();
//     for (int i = to; i >= 0; i--)
//     {
//         cout << str[i-1] << endl;
//     }
// }

void PrintDigitsInReversedOrder(int Number)
{
    int Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{

    int Number;
    Number = ReadPositiveNumber("Please enter a Positiv number");
    PrintDigitsInReversedOrder(Number);



}