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

void AddArrayElement(int Number, int arr[100], int& Arraylength)
{ 
    Arraylength++;
    arr[Arraylength - 1] = Number;
}

void CopyArrayUsingAddArrayElement(int ArraySource[100], int ArrayDestination[100], int& Arraylength, int Array2length)
{
    for (int i = 0; i < Arraylength; i++)
        AddArrayElement(ArraySource[i], ArrayDestination, Array2length);
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

    CopyArrayUsingAddArrayElement(Array1, Array2, Arraylength, Array2length);
    cout << "\nArray 2 elements: " << endl;
    PrintArray(Array2, Arraylength); 

}
