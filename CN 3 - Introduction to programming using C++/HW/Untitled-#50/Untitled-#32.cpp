#include <iostream>
using namespace std;

int Powr(int basis, int n){

    int sum = basis, i = 1;
    while (i < n)
    {
        sum = sum * basis;
        i++;
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