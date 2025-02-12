#include <iostream>
using namespace std;

void ReadInfo(float &Number1, float &Number2 ,char &Operation)
{
    cout << "Please enter your number1: " << endl;
    cin >> Number1;

    cout << "Piease enter your Number2: " << endl;
    cin >> Number2;

    cout << "Plrae enter the operation type: " << endl;
    cin >> Operation;
}

float Calculate(int Number1, int Number2, char Operation)
{
    switch (Operation)
    {
    case '+':
        return Number1 + Number2;
    case '-':
        return Number1 - Number2;
    case '*':
        return Number1 * Number2;
    case '/':
        return Number1 / Number2;
    default:
        return 0;
    }
}

void PrintResult(float Result)
{
    cout << Result;
}

int main(){

    float Number1, Number2;
    char Operation;

    ReadInfo(Number1,Number2,Operation);
    PrintResult(Calculate(Number1,Number2,Operation));
    return 0;
}