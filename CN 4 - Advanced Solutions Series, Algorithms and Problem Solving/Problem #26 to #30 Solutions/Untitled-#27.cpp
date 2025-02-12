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

void PrintNumber(int n){
    
    for(int i = 0; i <= n; i++){
        cout << n - i << endl;
    }
}

int main(){

    int n;
    n = ReadPositiveNumber("Please enter Number");

    PrintNumber(n);

    return 0;
}