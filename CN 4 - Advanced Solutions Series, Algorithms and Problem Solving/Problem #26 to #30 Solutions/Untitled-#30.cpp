#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number1;
    cout << "Please enter Number?" << endl;
    cin >> Number1;

    return Number1;
}

int MultipliedPreparation_UsingFotLoop(int n)
{

    int sum = 1;
    for(int i = 1; i <= n; i++){
        sum = sum * i;
    }

    return sum;
}

int MultipliedPreparation_UsingWhileLoop(int n)
{
    int sum = 1, i = 1;
    while (i <= n)
    {
        sum *= i;
        i++;
    }
    
    return sum;
}

int MultipliedPreparation_UsingDoWhileLoop(int n)
{
    int sum = 1, i = 1;
    do
    {
        sum *= i;
        i++;  
    } while (i <= n);

    return sum;
}

void PrintResult(int Result)
{
    cout << Result << endl;  
}

int main(){

    int n, sum;
    n = ReadNumber();

    sum = MultipliedPreparation_UsingWhileLoop(n);
    PrintResult(sum);

    return 0;
}