#include <iostream>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int number = 0;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

float Fun(int A, int B){

    return (float)A * sqrt(pow(B, 2) - pow(A, 2));
}

int main(){

float A, B;

A = ReadPositiveNumber("Please enter the rectangle siيe");
B = ReadPositiveNumber("Please enter rectangle diagonal");

cout << Fun(A, B);


    return 0;
} 