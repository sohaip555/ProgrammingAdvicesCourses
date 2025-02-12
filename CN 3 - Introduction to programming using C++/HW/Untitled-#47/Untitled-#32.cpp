#include <iostream>
using namespace std;

int Powr(int A, int n){

    int sum = A;
    for(int i = 1; i < n; i++){
        sum = sum * A;
    }
    return sum;
}

int main(){

    int basis, power, sum;
    cout << "Please enter basis: ";
    cin >> basis;
    cout << "Please enter power: ";
    cin >> power;

    sum = Powr(basis, power);
    cout << sum;

    return 0;
}