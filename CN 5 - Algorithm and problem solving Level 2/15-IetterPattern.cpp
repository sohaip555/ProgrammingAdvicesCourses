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

void LetterPattern(int Number)
{
    for (int i = 0; i < Number; i++)
    {
        for (int j = 64; j < 65 + i; j++)
        {
            cout << char(65 + i);
        }
        cout << endl;
    }
}

int main()
{
    LetterPattern(ReadPositiveNumber("Plrease enter your number"));
}