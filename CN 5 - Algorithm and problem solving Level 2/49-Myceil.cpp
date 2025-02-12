#include <iostream>
#include <cmath>
using namespace std;

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int Myceil(float Number)
{
    if (Number > 0)
        if (abs(GetFractionPart(Number)))
            return int(++Number);
        else
            return int(Number);
    else
        return Number;

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
    cout << "My ceil result = " << Myceil(Number) << endl;
    cout << "C++ ceil result = " << ceil(Number); 
}