#include <iostream>
using namespace std;


int SumOfOddNumber(int n){

    int i = 1, sum = 0;
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

    sum = SumOfOddNumber(n);
    cout << sum;

    return 0;
}