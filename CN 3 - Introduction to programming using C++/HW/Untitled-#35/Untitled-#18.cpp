#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14;

float AreaOfCircle(float PI, float Radius ){

    return  PI * pow(Radius, 2);
}


int main(){

const float PI = 3.14;
float Radius, Resolt;

cout << "Please enter the radius of the circle" << endl;
cin >> Radius;

Resolt = AreaOfCircle(::PI, Radius);

cout << "The radius of circle is: " << ceil(Resolt);


    return 0;

}