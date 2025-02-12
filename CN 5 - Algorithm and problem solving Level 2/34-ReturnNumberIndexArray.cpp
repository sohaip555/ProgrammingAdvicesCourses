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

int SearchNumberPositionInArray(int Array[100], int ArrayLength, int Number)
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

void PrintArray(int Arra[100], int ArraLength)
{

    for (int i = 0; i < ArraLength; i++)
    {
        cout << Arra[i] << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100], Arraylength, Number, NumberSearch;

    FillAraryWithRandomNumbers(Array, Arraylength);
    cout << "Array of elements is : " << endl;
    PrintArray(Array, Arraylength);

    Number = ReadPositiveNumber("Please enter a number to search for it ?");
    NumberSearch = SearchNumberPositionInArray(Array, Arraylength, Number);
    if (NumberSearch >= 0)
    {
        cout << "The Number you looking for : " << Number << endl;
        cout << "The Number Found at position : " << NumberSearch << endl;
        cout << "The Number Found its order : " << NumberSearch + 1 << endl;
    }
    else
    {
        cout << "The Number you looking for : " << Number << endl;
        cout << "The number is not found :-(";
    }
    

}
