#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;


// هذا البرنامج يقوم بحساب مساحة دائرة عنطريق ادخال اطوال اطلاع مثلث غير متساوي الاضلع

float CircleArea(float A, float B, float C){

    float P;
    P = (A + B + C) / 2;
    return PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
}


int main(){

float lengthA, lengthB, lengthC, Resolt;

cout << "Enter the side length A: " ;
cin >> lengthA;

cout << "Enter the side length B: ";
cin >> lengthB;

cout << "Enter the side length C: ";
cin >> lengthC;


Resolt = CircleArea(lengthA, lengthB, lengthC);
cout << "The Circle area is: " << Resolt;



  return 0;
}