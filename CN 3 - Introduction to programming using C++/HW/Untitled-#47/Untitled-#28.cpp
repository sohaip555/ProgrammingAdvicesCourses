#include <iostream>
using namespace std;


int SunmOfNumber(int n){

    int sum;
    for(int i = 1; i <= n; i+=2){
        sum = sum + i;
    }

    return sum;
}


int main(){

    int n, sum;
    cout << "Please enter number: " << endl;
    cin >> n;

    sum = SunmOfNumber(n);
    cout << sum;

    return 0;
}