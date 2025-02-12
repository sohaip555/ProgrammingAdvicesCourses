#include <iostream>
#include <cstdlib>
#include <time.h>
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

int RandomNumber(int From, int To)
{
    int Result;
    Result = rand() % (To - From + 1) + From;
    return Result;
}

void FillAraryWithRandomNumbers(int Array1[100], int &Arraylength)
{
    Arraylength = ReadPositiveNumber("Please enter the number of elements");

    for (int i = 0; i < Arraylength; i++)
    {
        Array1[i] = RandomNumber(1, 100);
    }
    
}

void PrintArray(int ArraySource[100], int ArrayLength)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        cout << ArraySource[i] << " ";
    }
    cout << endl;
}

bool IsPrime(int Number)
{

    short half = 0;
    half = Number / 2;

    if (Number > 0 && Number <=2)
    {
        return 1; 
    }
    else
    {
        for (int i = 2; i <= half; i++)
        {
            if (Number % i == 0)
            {
            return 0;
            }
        }
        return 1;
    }
    return 0;
}

void CopyOnlyPrimeNumber(int ArraySource[100], int ArrayDestination[100], int Array1Length, int &Array2Length)
{
    int counter = 0;
    for (int i = 0; i < Array1Length; i++)
    {
        if (IsPrime(ArraySource[i]))
        {
            cout << ArraySource[i] << endl;
            ArrayDestination[counter] = ArraySource[i];
            counter++;
        }
    }
    Array2Length = counter;
}

int main()
{
    srand((unsigned)time(NULL));
    int Array1[100], Array2[100], Array1length, Array2length;

    FillAraryWithRandomNumbers(Array1, Array1length);
    cout << "Array 1 elements: " << endl;
    PrintArray(Array1, Array1length);


    CopyOnlyPrimeNumber(Array1, Array2, Array1length, Array2length);
    cout << "\nPrime Number in Array2: " << endl;
    PrintArray(Array2, Array2length);



}
