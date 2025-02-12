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

void ReverseArray(int ArraySource[100], int ArrayDestination[100], int ArraLength)
{
    for (int i = 0; i < ArraLength; i++)
    {
        ArrayDestination[i] = ArraySource[ArraLength-1-i];
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
    int Array1[100], Array2[100], Arraylength;

    FillAraryWithRandomNumbers(Array1, Arraylength);
    cout << "Array 1 elements: " << endl;
    PrintArray(Array1, Arraylength);

    ReverseArray(Array1, Array2, Arraylength);
    cout << "\nArray 2 elements after copy: " << endl;
    PrintArray(Array2, Arraylength);

}
