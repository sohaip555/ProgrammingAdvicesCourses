#include <iostream>
#include <Cmath>
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

int PowrOf2_3_4(int Number, int powr)
{
    if (powr == 2)
    {
        return pow(Number, 2);
    }
    else if (powr == 3)
    {
        return pow(Number, 3);
    }
    else if (powr == 4)
    {
        return pow(Number, 4);
    }
    
    return 0;
}

void PrintResult(int Result)
{
    cout << Result;
}

int main(){

    int Number, powr;

    Number = ReadPositiveNumber("Please enter number: " );
    powr = ReadPositiveNumber("Please enter The powr of Number: ");

    PrintResult(PowrOf2_3_4(Number, powr));

    return 0;
}