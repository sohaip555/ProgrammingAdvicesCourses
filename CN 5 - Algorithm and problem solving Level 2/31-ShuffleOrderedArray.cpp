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

void swap(int& A, int& B)
{
    int Timp;
    Timp = A;
    A = B;
    B = Timp;
}

int RandomNumber(int From, int To)
{
    int Result;
    Result = rand() % (To - From + 1) + From;
    return Result;
}

void FillAraryWith1ToN(int Array1[100], int &Arraylength)
{
    for (int i = 0; i < Arraylength; i++)
        Array1[i] = i + 1;
}

void FillAraryWithRandomNumbers(int Array[100], int &Arraylength)
{
    for (int i = 0; i < Arraylength; i++)
    {
        swap(Array[RandomNumber(1, Arraylength) - 1], Array[RandomNumber(1, Arraylength) - 1]);
    }
}

void PrintArray(int Array1[100], int ArraLength)
{

    for (int i = 0; i < ArraLength; i++)
    {
        cout << Array1[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100], Arraylength;

    Arraylength = ReadPositiveNumber("Please enter the number of elements");

    FillAraryWith1ToN(Array, Arraylength);
    cout << "\nArray elements before Shuffle: " << endl;
    PrintArray(Array, Arraylength);

    FillAraryWithRandomNumbers(Array, Arraylength);
    cout << "\nArray elements after Shuffle: " << endl;
    PrintArray(Array, Arraylength);





}
