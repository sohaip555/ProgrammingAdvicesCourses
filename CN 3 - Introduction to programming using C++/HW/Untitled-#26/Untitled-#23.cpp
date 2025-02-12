#include <iostream>
#include <cmath>
using namespace std;

// هذا البرنامج يقوم بحساب مساحة دائرة عنطريق ادخال اطوال اطلاع مثلث غير متساوي الاضلع

int main(){

const float PI = 3.14;
float A, B, C, P, Resolt;

cout << "Enter the side length A" << endl;
cin >> A;

cout << "Enter the side length B" << endl;
cin >> B;

cout << "Enter the side length C" << endl;
cin >> C;

P = (A + B + C) / 2;
Resolt = PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2);
cout << round(Resolt);

  return 0;
}