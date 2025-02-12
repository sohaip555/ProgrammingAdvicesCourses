#include <iostream>
#include <cmath>
using namespace std;



int main(){

const float PI = 3.14;
float A, B, Resolt;
cout << "please enter the first number " << endl;
cin >> A;

cout << "please enter the second number " << endl;
cin >> B;


Resolt = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

cout << floor(Resolt);

  return 0;
}