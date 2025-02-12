#include <iostream>
using namespace std;


int TotoalEvenNumber(int n){

    int i = 0, sum = 0; 
    while (i <= n)
    {
        sum = sum + i;
        i+=2;
    }

    return sum;
}

int main(){

    int n, sum;
    cout << "Please enter number: ";
    cin >> n;

    sum = TotoalEvenNumber(n);
    cout << sum;

    return 0;
}