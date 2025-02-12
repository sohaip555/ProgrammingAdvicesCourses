#include <iostream>
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

float AreaOfTriangle(float TriangleBase, float TriangleHeight)
{
    return (TriangleBase / 2) * TriangleHeight;
}

void PrintResult(string Message, float Result)
{
    cout << Message << Result;
}

int main(){

    float TriangleBase;
    float TriangleHeight;
    float Result;

    TriangleBase = ReadPositiveNumber("Please enter Triangle base");
    TriangleHeight = ReadPositiveNumber("Please enter Triangle base");

    Result = AreaOfTriangle(TriangleBase, TriangleHeight);

    PrintResult("Triangle area is: ", Result);
    
    return 0;
}