#include <iostream>
#include <cmath>
using namespace std;

void Fun(int &A, int &B, int &Result){
    Result = A * sqrt(pow(B, 2) - pow(A, 2));
}

int main(){

float A, B, Result = 2;

cout << "Please enter the first number" << endl;
cin >> A;

cout << "Please enter the seconde number" << endl;
cin >> B;

cout << Result;


    return 0;
}