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

bool IsPrime(int Number)
{

    short half = 0;
    half = Number / 2;

    if (Number > 0 && Number <=2)
    {
        return 1; 
    }
    else
    {
        for (int i = 2; i <= half; i++)
        {
            if (Number % i == 0)
            {
            return 0;
            }
        }
        return 1;
    }
    return 0;
}

void PrintPrimeNumberFrom1ToN(int Number)
{
    cout << "\n";
    cout << "Prime number from 1 to " << Number << " are" << endl;
    for (int i = 1; i <= Number; i++)
    {
        if (IsPrime(i) > 0)
        {
            cout << i << endl;
        }
    }
}

int main(){

    int Number;

    Number = ReadPositiveNumber("Please enter Positive number?");
    PrintPrimeNumberFrom1ToN(Number);

}