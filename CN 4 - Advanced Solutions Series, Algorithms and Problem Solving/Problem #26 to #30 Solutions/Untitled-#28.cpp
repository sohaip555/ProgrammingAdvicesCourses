#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

int SunmOfOddNumber_UsingFotLoop(int n){
    int sum;
    for(int i = 1; i <= n; i+=2){
        sum = sum + i;
    }

    return sum;
}

int SunmOfOddNumber_UsingDoWhileLoop(int n){
    int sum = 0, i = 1;

    do
    {
        sum = sum + i;
        i +=2;
    } while (i <= n);
    
    return sum;
}

int SunmOfOddNumber_UsingWhileLoop(int n){
    int sum = 0, i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i +=2;
    }
    
    return sum;
}

int main(){

    int n, sum;
    n = ReadPositiveNumber("Please enter Number");

    sum = SunmOfOddNumber_UsingWhileLoop(n);
    cout << sum;

    return 0;
}