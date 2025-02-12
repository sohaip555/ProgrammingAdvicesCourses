#include <iostream>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;

    return Number;
}

int SumOfNumber(int i)
{

    int sum = 0; 
    while (i != -99)
    {
        sum += i;
        i = ReadNumber("Please enter your number " + to_string(++i));
    }
    return sum;
}

void PrintResult(int Number)
{
    int Result = SumOfNumber(Number);
    cout << "Total of your number is: " << Result;
}

int main(){

    int Number = 0;
    PrintResult(Number);

    return 0;
}