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

bool IsEven(int Number)
{
    return (Number % 2 == 0);
}

int EvenCount(int Array[100], int Arraylength)
{
    int counter = 0;
    for (int i = 0; i < Arraylength; i++)
    {
        if (IsEven(Array[i]))
        {
            counter++;
        }
    }
    return counter;
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
    int Array1[100],Arraylength = 0;

    FillAraryWithRandomNumbers(Array1, Arraylength);
    cout << "Array 1 elements: " << endl;
    PrintArray(Array1, Arraylength); 

    cout << "\nEven number count : ";
    cout << EvenCount(Array1, Arraylength);

}
