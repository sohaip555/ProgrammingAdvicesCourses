#include <iostream>
using namespace std;



int main(){

float Loan_Amount, Monthly_Installment;
short TotalMonths;

cout << "Please enter your Loan Amount ";
cin >> Loan_Amount;

cout << "Please enter your Loan Amount ";
cin >> Monthly_Installment;

TotalMonths = Loan_Amount / Monthly_Installment;

cout << "The total of months is " << TotalMonths;

}