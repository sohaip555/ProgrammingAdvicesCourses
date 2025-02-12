#include <iostream>
#include <cmath>
using namespace std;
const float Pi = 3.14;

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

float CircleAreaAlongCircumference(float CircumferenceOfACircle)
{
    return pow(CircumferenceOfACircle, 2) / (4 * Pi);
}

void PrintResult(float AreaCircle)
{
    cout << AreaCircle << endl;  
}

int main(){

float CircumferenceOfACircle, Resolt;
CircumferenceOfACircle = ReadPositiveNumber("Please enter circumference of a circle");
Resolt = CircleAreaAlongCircumference(CircumferenceOfACircle);

PrintResult(Resolt);

  return 0;
}