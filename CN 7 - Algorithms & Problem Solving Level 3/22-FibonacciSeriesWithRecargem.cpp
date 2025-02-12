#include <iostream>
using namespace std;

void PrintFibonacciSeriesUsingRecurssion(int Number, int Prev1, int Prev2)
{
    int Timp, i = 0;
    
    if (i < Number)
    {
        cout << Prev1 << "  ";
        Timp = Prev1;
        Prev1 = Prev2 + Prev1;
        Prev2 = Timp;

        Number --;
        PrintFibonacciSeriesUsingRecurssion(Number, Prev1, Prev2);
    }
    

}

int main()
{
    PrintFibonacciSeriesUsingRecurssion(10, 1, 0);
    system("pause>0");    

}