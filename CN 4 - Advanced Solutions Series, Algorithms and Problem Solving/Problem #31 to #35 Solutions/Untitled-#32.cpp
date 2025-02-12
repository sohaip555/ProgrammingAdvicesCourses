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

int PowerOfM(int Number, int power)
{
    int num;
    if (power == 0)
    {
        return 1;
    }else
    {
        for (int i = 1; i < power; i++)
        {
            return Number *=Number;
        }
    }
    return 0;
}

int main(){

    short Number , power;
    Number = ReadPositiveNumber("Please enter number: ");
    power = ReadPositiveNumber("Please enter The powr of Number: ");
    cout << PowerOfM(Number, power);

}