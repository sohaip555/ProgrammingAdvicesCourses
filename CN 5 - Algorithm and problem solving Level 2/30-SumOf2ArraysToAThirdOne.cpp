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

    for (int i = 0; i < Arraylength; i++)
    {
        Array1[i] = RandomNumber(1, 100);
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

void SumOf2ArrayNumber(int SumOfArray[100], int ArraySource1[100], int ArraySource2[100], int ArraLength)
{
    for (int i = 0; i < ArraLength; i++)
    {
        SumOfArray[i] = ArraySource1[i] + ArraySource2[i];
    }
}
 
int main()
{
    srand((unsigned)time(NULL));
    int Array1[100], Array2[100], SumOfArray[100], Arraylength;

    Arraylength = ReadPositiveNumber("Please enter the number of elements");

    FillAraryWithRandomNumbers(Array1, Arraylength);
    cout << "\nArray 1 elements: " << endl;
    PrintArray(Array1, Arraylength);

    FillAraryWithRandomNumbers(Array2, Arraylength);
    cout << "\nArray 2 elements: " << endl;
    PrintArray(Array2, Arraylength);

    SumOf2ArrayNumber(SumOfArray, Array1, Array2, Arraylength);
    cout << "\nSum of Array 1 and Array 2 elements:" << endl;
    PrintArray(SumOfArray, Arraylength);



}
