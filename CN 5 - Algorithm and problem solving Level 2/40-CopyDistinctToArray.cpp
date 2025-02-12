#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void FillArray(int Array[100], int& Arraylength)
{
    Arraylength = 10;
    Array[0] = 10;
    Array[1] = 10;
    Array[2] = 10;
    Array[3] = 50;
    Array[4] = 50;
    Array[5] = 70;
    Array[6] = 70;
    Array[7] = 70;
    Array[8] = 70;
    Array[9] = 90;
}

int FindhNumberPositionInArray(int Number, int Array[100], int ArrayLength)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        if (Number == Array[i])
        {
            return i;
        }
    }

    return -1;
}

bool IsNumberInArray(int Number, int Array[100], int ArrayLength)
{
    return FindhNumberPositionInArray(Number, Array, ArrayLength) != -1;
}

void AddArrayElement(int Number, int Array[100], int& ArrayLength)
{ 
    Array[ArrayLength] = Number;
    ArrayLength++;
}

void CopyDistinctNumberInArray(int ArraySource[100],int ArrayDestination[100], int& ArraySourceLength, int &ArrayDestinationlength)
{
    for (int i = 0; i < ArraySourceLength; i++)
    {
        if (!(IsNumberInArray(ArraySource[i], ArrayDestination, ArrayDestinationlength)))
        {
            AddArrayElement(ArraySource[i], ArrayDestination, ArrayDestinationlength);
        }
        
    }
    
}

void PrintArray(int Array[100], int ArrayLength)
{ 
    for (int i = 0; i < ArrayLength; i++)
        cout << Array[i] << " ";

    cout << "\n"; 
} 

int main()
{ 
    srand((unsigned)time(NULL));
    int Array1[100], Array2[100], Arraylength = 0, Array2length = 0;

    FillArray(Array1, Arraylength);
    cout << "Array 1 elements: " << endl;
    PrintArray(Array1, Arraylength); 

    CopyDistinctNumberInArray(Array1, Array2, Arraylength, Array2length);
    cout << "\nArray 2 distinct elements: " << endl;
    PrintArray(Array2, Array2length); 
}
