#include <iostream>
#include <math.h>
using namespace std;

float ReasNumber()
{
    float Number;
    cout << "Please enter number" << endl;
    cin >> Number;
    return Number;
}

float MyABS(float Number)
{
    if (Number > 0)
    {
        return Number;
    }
    return Number * -1;
}

int main()
{
    int Number = ReasNumber();
    cout << "My ABS result = " << MyABS(Number) << endl;
    cout << "C++ ABS result = " << abs(Number);

}