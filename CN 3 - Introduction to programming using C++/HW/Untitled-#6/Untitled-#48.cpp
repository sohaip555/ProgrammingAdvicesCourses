#include <iostream>
using namespace std;



int main(){

float Loan_Amount, MonthlyValue;
short HowManyMonths;

cout << "Please enter your Loan Amount? ";
cin >> Loan_Amount;

cout << "How many months do you want to repay the loan? ";
cin >> HowManyMonths;

MonthlyValue = Loan_Amount / HowManyMonths;

cout << "The monthly value is " << MonthlyValue;

}