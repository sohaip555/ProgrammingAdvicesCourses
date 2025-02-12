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

void FillAraryWithRandomNumbers(int Array[100], int &Arraylength)
{
    Arraylength = ReadPositiveNumber("Please enter the number of elements");

    for (int i = 0; i < Arraylength; i++)
    {
        Array[i] = RandomNumber(1, 100);
    }
    
}

void PrintArray(int Arra[100], int ArraLength)
{

    for (int i = 0; i < ArraLength; i++)
    {
        cout << Arra[i] << " ";
    }
    cout << endl;
}

int SumArray(int Arra[100], int Length)
{
    int Sum = 0;
    for (int i = 0; i < Length; i++)
    {
        Sum += Arra[i];  
    }
    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100], Arraylength;

    FillAraryWithRandomNumbers(Array, Arraylength);
    cout << "Array of elements is : ";
    PrintArray(Array, Arraylength);

    cout << "Sum number is : " << SumArray(Array, Arraylength);
}
