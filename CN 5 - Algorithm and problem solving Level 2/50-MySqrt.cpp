#include <iostream>
#include <cmath>
using namespace std;

float MySqrt(int Number)
{
    return pow(Number, 0.5);
}

float ReadNumber()
{
    float Number;
    cout << "Please enter number" << endl;
    cin >> Number;
    return Number;
}

int main()
{
    float Number = ReadNumber();
    cout << "My Sqrt result = " << MySqrt(Number) << endl;
    cout << "C++ Sqrt result = " << sqrt(Number); 
}