#include <iostream>
#include <cmath>
using namespace std;



int main(){

const float Pi = 3.14;
float CircumferenceOfACircle, Resolt;

cout << "Please enter circumference of a circle" << endl;
cin >> CircumferenceOfACircle;

Resolt = pow(CircumferenceOfACircle, 2) / (4 * Pi);

cout << floor(Resolt);





  return 0;
}