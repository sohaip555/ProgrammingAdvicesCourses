#include <iostream>
using namespace std;


int main(){

short FirstNumber, SecondNumber;
bool Resolt;
cout << "Please enter your first number ";
cin >> FirstNumber;

cout << "Please enter your second number ";
cin >> SecondNumber;
Resolt = FirstNumber == SecondNumber;

cout << FirstNumber << " == " << SecondNumber << " is " << Resolt << endl;

Resolt = FirstNumber != SecondNumber;
cout << FirstNumber << " != " << SecondNumber << " is "  << Resolt << endl;

Resolt = FirstNumber < SecondNumber;
cout << FirstNumber << " < " << SecondNumber << " is "  << Resolt << endl;

Resolt = FirstNumber > SecondNumber;
cout << FirstNumber << " > " << SecondNumber << " is "  << Resolt << endl;

Resolt = FirstNumber <= SecondNumber;
cout << FirstNumber << " <= " << SecondNumber << " is "  << Resolt << endl;

Resolt = FirstNumber >= SecondNumber;
cout << FirstNumber << " >= " << SecondNumber << " is "  << Resolt << endl;




    return 0;
}