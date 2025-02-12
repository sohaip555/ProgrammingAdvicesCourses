#include <iostream>
#include <cmath>
using namespace std;

int MyFloot(float Number)
{
    if (Number > 0)
         return int(Number);
    else
        return int(--Number);

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
    cout << "My Floot result = " << MyFloot(Number) << endl;
    cout << "C++ Floot result = " << floor(Number); 
}