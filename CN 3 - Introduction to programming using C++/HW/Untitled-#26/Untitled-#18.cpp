#include <iostream>
#include <cmath>
using namespace std;


int main(){

const float pi = 3.14;
float Radius, Resolt;

cout << "Please enter the radius of the circle" << endl;
cin >> Radius;

Resolt = pi * pow(Radius, 2);

cout << "The radius of circle is " << ceil(Resolt);


    return 0;

}