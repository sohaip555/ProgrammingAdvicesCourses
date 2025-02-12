#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;


float CircleArea(float L, float &Resolt){
    Resolt = pow(L, 2) / (4 * PI);
}


int main(){

float L, Resolt;

cout << "Please enter circumference of a circle" << endl;
cin >> L;

Resolt = CircleArea(L, Resolt);
cout << "The Circle area is: " << Resolt;



  return 0;
}