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

int Total_Month(int Loan_Amount, int Monthly_Installment)
{
    return Loan_Amount / Monthly_Installment;
}

void PrintResult(string Message, int Result)
{
    cout << Message << Result;
}

int main(){

    float Loan_Amount, Monthly_Installment;
    short TotalMonths;

    Loan_Amount = ReadPositiveNumber("Please enter your Loan Amount");
    Monthly_Installment = ReadPositiveNumber("Please enter your Monthly installment");
    TotalMonths = Total_Month(Loan_Amount, Monthly_Installment);
    PrintResult("The total of months is ", TotalMonths);


}