#include <iostream>
using namespace std;

int MultipliedPreparation(int n){

    int sum = 1, i = 1;
    while (i <= n)
    {
        sum = sum * i;
        i++;
    }
    return sum;
}

int main(){

    int n, sum;
    cout << "Please enter number: " ;
    cin >> n;

    sum = MultipliedPreparation(n);
    cout << sum;

    return 0;
}