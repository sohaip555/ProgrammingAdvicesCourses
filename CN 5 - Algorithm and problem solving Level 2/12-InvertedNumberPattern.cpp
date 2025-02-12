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

void InvertedNumberPattern(int Number)
{
    for (int i = 0; i < Number; i++)
    {
        for (int j = 0; j < Number - i; j++)
        {
            cout << Number - i;
        }
        cout << endl;
    }
}

int main()
{
    InvertedNumberPattern(ReadPositiveNumber("Plrease enter your number"));
}