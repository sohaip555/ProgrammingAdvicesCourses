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

string IsPrime(int Number)
{

    int half = 0;
    half = Number / 2;

    if (Number > 0 && Number <=2)
    {
        return "Prime"; 
    }
    else
    {
        for (int i = 2; i <= half; i++)
        {
            if (Number % i == 0)
            {
            return "NOT Prime";
            }
        }
        return "Prime";
    }
}


int main(){

    int Number;

    Number = ReadPositiveNumber("Please enter Positive number?");
    cout << IsPrime(Number);
}