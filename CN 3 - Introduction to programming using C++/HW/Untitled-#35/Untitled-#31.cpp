#include <iostream>
#include <Cmath>
using namespace std;

int pow2(int number)
{
    return pow(number, 2);
}

int pow3(int number)
{
    return pow(number, 3);
}

int pow4(int number)
{
    return pow(number, 4);
}


int main(){

short number ;

cout << "Please enter your number" << endl ;
cin >> number;

cout << round(pow2(number)) << endl;
cout << round(pow3(number)) << endl;
cout << round(pow4(number)) << endl;

    return 0;
}