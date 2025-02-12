#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;


float CircleArea(float A, float B){

    return PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
}

int main(){

float A, B, Resolt;
cout << "please enter the first number: ";
cin >> A;

cout << "please enter the second number: ";
cin >> B;

Resolt = CircleArea(A, B);

cout << "The Circle area is: " << Resolt;

  return 0;
}