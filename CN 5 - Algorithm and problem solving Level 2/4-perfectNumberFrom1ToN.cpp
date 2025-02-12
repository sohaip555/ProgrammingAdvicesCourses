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

bool IsPerfect(int Number)
{
    int sum = 0;
    int half = Number / 2;
    for (int i = 1; i <= half; i++)
    {
        if (Number % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum == Number && sum != 0;
}

void PrintPerfectNumberFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
    if (IsPerfect(i) == 1)
        cout << i << endl;
    }
}

int main(){

    int Number;

    Number = ReadPositiveNumber("Please enter Positive number?");
    PrintPerfectNumberFrom1ToN(Number);
    
}