#include <iostream>
using namespace std;

struct stCurrency
{
    short Penny,Nackel,Dime,Quarter,Dollar;
};

stCurrency ReadMoney()
{
    stCurrency Currency;
    cout << "Please enter your Money \n";

    cout << "Penny?";
    cin >> Currency.Penny;

    cout << "Nackel?";
    cin >> Currency.Nackel;

    cout << "Dime?";
    cin >> Currency.Dime;

    cout << "Quarter?";
    cin >> Currency.Quarter;

    cout << "Dollar?";
    cin >> Currency.Dollar;

    return Currency;
}

float CalculateCurrency(stCurrency Currency)
{
    float Penny;
    Penny = Currency.Penny + (Currency.Nackel * 5) + (Currency.Dime * 10)
    + (Currency.Quarter * 25) + (Currency.Dollar * 100);
    return Penny;
}

void PrintResult(stCurrency Currency)
{
    cout << "Your Penny is: " << CalculateCurrency(Currency)<< endl;
    cout << "Your Dollar is: " << CalculateCurrency(Currency) * 0.01 << endl;
}

int main(){

    stCurrency Currency;

    PrintResult(ReadMoney());

    return 0;
}