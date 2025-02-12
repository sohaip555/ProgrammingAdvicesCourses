#include <iostream>
#include <Cmath>
using namespace std;


int main(){

short number , power;
cout << "Please enter your number" << endl ;
cin >> number;

cout << "Enter the power of number" << endl;
cin >> power;

cout << round(pow(number, power)) << endl;

}