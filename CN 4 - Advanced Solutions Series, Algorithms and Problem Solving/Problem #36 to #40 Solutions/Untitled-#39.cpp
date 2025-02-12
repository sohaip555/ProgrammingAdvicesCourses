#include <iostream>
using namespace std ;

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

float GetRemainder(int Bill, int Cashpaid)
{
    return Bill - Cashpaid;
}

void PrintResult(string Message, int Result)
{
    cout << Message << Result;
}

int main(){

    int Cashpaid, Bill, Result;

    Bill = ReadPositiveNumber("Please enter your Bill?");
    Cashpaid = ReadPositiveNumber("Please enter your Cashpaid?");
    Result = GetRemainder(Bill,Cashpaid);
    PrintResult("The remainder is ", Result);


}