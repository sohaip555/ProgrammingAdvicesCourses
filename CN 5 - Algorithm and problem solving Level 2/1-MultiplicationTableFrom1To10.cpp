#include <iostream> 
using namespace std;

// Multiplication table from 1 to 10

void PrintTableHeader()
{
    cout << "\t\t\t  Multiplication table from 1 to 10" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "\t " << i ;
    }
    cout << "\n_____________________________________________________________________________________";

}

void MultiplicationTableFrom1To10(int number[100])
{
    int Counter = 0;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            number[Counter++] = i * j;
        }
    }
}

void PrintMultiplicationTable(int number[100])
{
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << endl << i << "\t|";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t ";
        }
    }
}

int main()
{

    int number[100];
    MultiplicationTableFrom1To10(number);
    PrintMultiplicationTable(number);

    return 0;
}