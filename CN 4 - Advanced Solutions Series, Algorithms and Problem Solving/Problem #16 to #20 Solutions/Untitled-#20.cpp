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

float CalculateDiameterOfCircle(float width)
{
    return (PI * pow(width, 2)) / 4 ;  
}

void PrintResult(string Message, float AreaCircle)
{
    cout << Message << AreaCircle << endl;  
}


int main(){

    float Result;

    float width = ReadPositiveNumber("please enter width of the circle ");
    Result = CalculateDiameterOfCircle(width);
    PrintResult("The Diameter of the circle is ", Result);
    return 0;
}