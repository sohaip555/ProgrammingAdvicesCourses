#include <iostream>
#include <Cmath>
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

float CalculateCircleArea(float Diameter)
{
    return ceil((PI * pow(Diameter, 2)) / 4) ;  
}

void PrintResult(string Message, float AreaCircle)
{
    cout << Message << AreaCircle << endl;  
}

int main(){

    float Diameter;

    Diameter = ReadPositiveNumber("please enter Diameter of the circle ");
    float AreaCircle = CalculateCircleArea(Diameter);
    PrintResult("The Area Of Circle = ", AreaCircle);

  return 0;
}