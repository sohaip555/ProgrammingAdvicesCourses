#include <iostream>
using namespace std;

int MultipliedPreparation(int n){

    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum = sum * i;
    }

    return sum;
}

int main(){

    int n, sum;
    cout << "Please enter number: " << endl;
    cin >> n;

    sum = MultipliedPreparation(n);
    cout << sum;

    return 0;
}