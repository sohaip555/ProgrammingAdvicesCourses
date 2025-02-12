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

void InvertedLetterPattern(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(64 + i);
        }
        cout << endl;
    }
}

int main()
{
    InvertedLetterPattern(ReadPositiveNumber("Plrease enter your number"));
}