#include <iostream>
using namespace std;


int ReadPositiveNumber(int Number)
{
    float number;
    do
    {
        cin >> number;
    } while (number < 0);
    
    return number;
}

int SumOfEvenNumber_UsingFotLoop(int Number)
{
    int sum = 0;
    for (int i = 0; i <= Number; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int SumOfEvenNumber_UsingDoWhileLoop(int Number)
{
    int sum = 0, i = 2;

    do
    {
        sum +=i;
        i+=2;
    } while (i <= Number);
    
    return sum;
}

int SumOfEvenNumber_UsingWhileLoop(int Number)
{
    int sum = 0, i = 2;

    while (i <= Number)
    {
        sum += i;
        i +=2;
    }
    
    return sum;
}

void PrintSum(int Number)
{
    cout << Number;
}

int main(){

    int Number;

    ReadPositiveNumber(Number);
    PrintSum(SumOfEvenNumber_UsingWhileLoop(Number));

    return 0;
}