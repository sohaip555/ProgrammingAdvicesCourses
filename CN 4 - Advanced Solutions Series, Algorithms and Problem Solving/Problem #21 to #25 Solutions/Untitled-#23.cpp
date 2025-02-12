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

float CircleArea(float A, float B, float C){
    float P;
    P = (A + B + C) / 2;
    return PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
}

void PrintResult(string Message, float AreaCircle)
{
    cout << Message << AreaCircle << endl;  
}

int main(){

float lengthA, lengthB, lengthC, Resolt;

lengthA = ReadPositiveNumber("Enter the side length A: ");
lengthB = ReadPositiveNumber("Enter the side length B: ");
lengthC = ReadPositiveNumber("Enter the side length C: ");

Resolt = CircleArea(lengthA, lengthB, lengthC);
PrintResult("The Circle area is: ", Resolt);

  return 0;
}