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

float TotalBillAfterService(float Total)
{
    Total = Total * 1.1 ;
    Total = Total * 1.16;

    return Total;
}

void PrintResult(string Message, float Result)
{
    cout << Message << Result;
}

int main(){

    float Total, Result;

    Total = ReadPositiveNumber("Please enter your Bill");
    Result = TotalBillAfterService(Total);

    PrintResult("The total is ", Result);
}