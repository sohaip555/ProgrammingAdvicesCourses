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

void NumberPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    NumberPattern(ReadPositiveNumber("Plrease enter your number"));
}