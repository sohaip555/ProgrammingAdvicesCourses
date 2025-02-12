#include <iostream>
using namespace std;

void PrintFibonacciSeriesUsingLoop(int Number)
{
    int Prev1 = 1, Prev2 = 1, Timp;
    
    cout << Prev1 << " ";
    cout << Prev2 << " ";
    
    for (int i = 2; i < Number; i++)
    {
        cout << Prev1 + Prev2  << " ";
        Timp = Prev1;
        Prev1 = Prev1 + Prev2;
        Prev2 = Timp;
    }
    
}

int main()
{
    PrintFibonacciSeriesUsingLoop(10);
    system("pause>0");    

}