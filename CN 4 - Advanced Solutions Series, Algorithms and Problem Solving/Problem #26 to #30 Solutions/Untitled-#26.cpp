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

void PreintRangeFrom1ToN_UsingForLoop(int n){
        for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}

void PreintRangeFrom1ToN_UsingWhileLoop(int n){
    int i = 1;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}

void PreintRangeFrom1ToN_UsingDoWhileLoop(int n){
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    }while (i <= n);
}

int main(){

    int N = ReadPositiveNumber("Please enter Number");
    PreintRangeFrom1ToN_UsingDoWhileLoop(N);

    return 0;
}