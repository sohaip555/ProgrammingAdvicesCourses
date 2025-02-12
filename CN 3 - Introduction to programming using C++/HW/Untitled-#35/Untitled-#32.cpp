#include <iostream>
#include <Cmath>
using namespace std;

int powto(int number, int power)
{
    return pow(number, power);
}


int main(){

short number , power;
cout << "Please enter your number" << endl ;
cin >> number;

cout << "Enter the power of number" << endl;
cin >> power;

cout << round(powto(number, power)) << endl;

}