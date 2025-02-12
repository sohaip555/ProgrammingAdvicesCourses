#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int RandomNumber(int From, int To);

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

void FillAraryWithRandomNumbers(int Array[100], int &Arraylength)
{
    Arraylength = ReadPositiveNumber("Please enter the number of elements");

    for (int i = 0; i < Arraylength; i++)
    {
        Array[i] = RandomNumber(-100, 100);
    }
    
}

int NegativeCount(int Array[100], int ArrayLength)
{
    int counter = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        if (Array[i] < 0)
        {
            counter++;
        }
    }

    return counter;
}

void PrintArray(int Arra[100], int ArraLength)
{

    for (int i = 0; i < ArraLength; i++)
    {
        cout << Arra[i] << " ";
    }
    cout << endl;
}

int RandomNumber(int From, int To)
{
    int Result;
    Result = rand() % (To - From + 1) + From;
    return Result;
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100], Arraylength;

    FillAraryWithRandomNumbers(Array, Arraylength);
    cout << "Array of elements is : " << endl;
    PrintArray(Array, Arraylength);

    cout << "\nNegative number count : ";
    cout << NegativeCount(Array, Arraylength);


}
