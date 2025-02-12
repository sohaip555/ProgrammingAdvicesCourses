#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

float CalculateCircleArea(float Radius)
{
    float pi = 3.14;
    return pi * pow(Radius, 2);
}

void PrintResult(string Message, float AreaOfCircle)
{
    cout << Message << AreaOfCircle;
}

int main(){

    int radius = ReadPositiveNumber("Please enter the radius of the circle");
    float Result = CalculateCircleArea(radius);
    PrintResult("The Area of circle is ", Result);

    return 0;
}