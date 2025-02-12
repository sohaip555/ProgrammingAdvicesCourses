#include <iostream>
#include <Cmath>
using namespace std;
const float PI = 3.14;

float DiameterOfTheCircle(float PI, float Diameter){

    return ceil((PI * pow(Diameter, 2)) / 4) ;
}


int main(){

float Diameter, Result;

cout << "please enter Diameter of the circle " << endl;
cin >> Diameter;

Result = DiameterOfTheCircle(PI, Diameter);
cout << "The Diameter of the circle is: " << Result;

  return 0;
}