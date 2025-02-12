#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
    int number = 0;
    cout << Message << endl;
    cin >> number;

    return number;
}

void Swap(int &number1, int &number2)
{
    int Temp = 0;

    Temp = number1 ;
    number1 = number2 ;
    number2 = Temp;
}

void Print2Numbers(int number1, int number2)
{
    cout << number1 << endl;
    cout << number2 << endl;
}

int main()
{
    int number1 ;
    int number2 ;

    number1 = ReadNumber("please enter your number1");
    number2 = ReadNumber("please enter your number2");

    Print2Numbers(number1, number2);
    Swap(number1, number2);
    Print2Numbers(number1, number2);
    return 0;
}
