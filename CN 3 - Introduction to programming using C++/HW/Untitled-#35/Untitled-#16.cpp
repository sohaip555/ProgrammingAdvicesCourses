#include <iostream>
#include <cmath>
using namespace std;


float AreaOfRectangule(float A, float B){

return A * sqrt(pow(B, 2) - pow(A, 2));
}


int main(){

float A, B, Resolt;

cout << "Please enter the first number" << endl;
cin >> A;

cout << "Please enter the seconde number" << endl;
cin >> B;

Resolt = AreaOfRectangule(A, B);
cout << "Area of rectangule is: " << Resolt;

    return 0;
}