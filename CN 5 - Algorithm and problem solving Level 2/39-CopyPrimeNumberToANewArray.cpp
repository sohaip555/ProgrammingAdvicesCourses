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

void AddArrayElement(int Number, int Array[100], int& Arraylength)
{ 
    Arraylength++;
    Array[Arraylength - 1] = Number;
}

bool IsPrime(int Number)
{
    short half = Number / 2;
    if (Number > 0 && Number <=2)
    {
        return 1; 
    }
    else
    {
        for (int i = 2; i <= half; i++)
        {
            if (Number % i == 0)
            return 0;
        }
        return 1;
    }
    return 0;
}

void AddPrimeNumber(int ArraySource[100], int ArrayDestination[100], int& Arraylength, int &Array2length)
{
    for (int i = 0; i < Arraylength; i++)
        if (IsPrime(ArraySource[i]))
        {
            int Number = ArraySource[i];
            AddArrayElement(Number, ArrayDestination, Array2length);
        }
}

void PrintArray(int arr[100], int arrLength)
{ 
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n"; 
} 

int main()
{ 
    srand((unsigned)time(NULL));
    int Array1[100], Array2[100], Arraylength = 0, Array2length = 0;

    FillAraryWithRandomNumbers(Array1, Arraylength);
    cout << "Array 1 elements: " << endl;
    PrintArray(Array1, Arraylength); 

    AddPrimeNumber(Array1, Array2, Arraylength, Array2length);
    cout << "\nArray 2 elements: " << endl;
    PrintArray(Array2, Array2length); 
}
