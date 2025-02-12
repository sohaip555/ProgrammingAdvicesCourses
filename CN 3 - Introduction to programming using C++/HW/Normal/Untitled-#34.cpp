#include <iostream>
using namespace std;

void Mysomepresegr()
{
int Num1, Num2, Resolt;

cout << "Please enter your number1 " << endl;
cin >> Num1;

cout << "Please enter your number2 " << endl;
cin >> Num2;

Resolt = Num1 + Num2;

cout << "*************************" << endl;

cout << Resolt;

}

int Mysomefunction()
{

int Num1, Num2, Resolt;

cout << "Please enter your number1 " << endl;
cin >> Num1;

cout << "Please enter your number2 " << endl;
cin >> Num2;

Resolt = Num1 + Num2;

cout << "*************************" << endl;

    return Resolt ; 
}

int main(){

// Mysomepresegr();

cout << Mysomefunction();

return 0;

}