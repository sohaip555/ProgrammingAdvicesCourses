#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

int Monthly_Value(int Loan_Amount, int HowManyMonths)
{
    return Loan_Amount / HowManyMonths;
}

void PrintResult(string Message, int Result)
{
    cout << Message << Result;
}

int main(){

    float Loan_Amount, MonthlyValue;
    short HowManyMonths;

    Loan_Amount = ReadPositiveNumber("Please enter your Loan Amount? ");
    HowManyMonths = ReadPositiveNumber("How many months do you want to repay the loan? ");
    MonthlyValue = Monthly_Value(Loan_Amount, HowManyMonths);
    PrintResult("The monthly value is ", MonthlyValue);

}