#include <iostream>
using namespace std;


int TotoalEvenNumber(int n){

    int sum; 
    for(int i = 0; i <= n; i+=2){
        sum = sum + i;
    }

    return sum;
}

int main(){

    int n, sum;
    cout << "Please enter number: " << endl;
    cin >> n;


    sum = TotoalEvenNumber(n);
    cout << sum;

    return 0;
}