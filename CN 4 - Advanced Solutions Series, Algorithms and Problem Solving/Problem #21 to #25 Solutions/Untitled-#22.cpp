#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;

float ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

float CalculateCircleArea(float A, float B){
    return PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
}

void PrintResult(float Result)
{
    cout << "The Circle area is: " << Result;
}

int main(){

float A, B, Result;

A = ReadPositiveNumber("please enter the first number: ");
B = ReadPositiveNumber("please enter the second number: ");

Result = CalculateCircleArea(A, B);
PrintResult(Result);

  return 0;
}