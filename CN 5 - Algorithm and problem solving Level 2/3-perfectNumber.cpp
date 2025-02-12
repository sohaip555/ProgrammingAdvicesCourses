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

int main(){

    int Number;

    Number = ReadPositiveNumber("Please enter Positive number?");
    
    if (IsPerfect(Number))
        cout << Number << " is perfect";
    else
        cout << Number << " is not perfect"; 
    
}