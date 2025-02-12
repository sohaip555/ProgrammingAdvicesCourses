#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void FillArray(int Array[100], int& Arraylength)
{
    Arraylength = 6;
    Array[0] = 10;
    Array[1] = 20;
    Array[2] = 20;
    Array[3] = 30;
    Array[4] = 20;
    Array[5] = 10;
}

void ReverseArray(int ArraySource[100], int ArrayDestination[100], int ArraLength)
{
    for (int i = 0; i < ArraLength; i++)
    {
        ArrayDestination[i] = ArraySource[ArraLength-1-i];
    }
}

bool IsPalindromArray(int ArraySource[100], int ArrayDestination[100], int ArraLength)
{
    for (int i = 0; i < ArraLength; i++)
    {
        if (ArraySource[i] != ArrayDestination[i])
        {
            return 0;
        }
    }
    return 1;
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
    int Array1[100], Array2[100], Arraylength = 0;

    FillArray(Array1, Arraylength);
    ReverseArray(Array1, Array2, Arraylength);

    PrintArray(Array1, Arraylength);

    if (IsPalindromArray(Array1, Array2, Arraylength))
    {
        cout << "\nYes array is palindrom" << endl;
    }else
    {
        cout << "\nNo array is not Palindrom" << endl;
    }

}
