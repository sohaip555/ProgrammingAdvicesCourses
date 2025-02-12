#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)
{

    int IntPart;
    IntPart = int(Number);

    float FraPart = GetFractionPart(Number);
    if (abs(FraPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }else
    return IntPart;
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
    cout << "My Round result = " << MyRound(Number) << endl;
    cout << "C++ Round result = " << round(Number); 
}