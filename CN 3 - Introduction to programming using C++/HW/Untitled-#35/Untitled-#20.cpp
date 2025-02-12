#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.14;


float DiameterOfTheCircle(float Width, float &Result){
    Result = (PI * pow(Width, 2)) / 4 ;
}

int main(){

float Width;
float Result;

cout << "please enter width of the circle " << endl;
cin >> Width;
cout << "The Diameter of the circle is: " << DiameterOfTheCircle(Width, Result);

// cout << "The Diameter of the circle is " << ceil(Result);

  return 0;
}