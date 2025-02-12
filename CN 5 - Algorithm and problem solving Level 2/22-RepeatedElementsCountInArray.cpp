#include <iostream>
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

void ReadArray(int Array[100], int &Arraylength)
{
    Arraylength = ReadPositiveNumber("Please enter the number of elements");

    cout << "Enter array elements " << endl;
    for (int i = 0; i < Arraylength; i++)
    {
        cout << "Elements [" << i + 1 << "] : ";
        cin >> Array[i];
    }
    cout << endl;
}

void PrintArrayElements(int Array[100], int Arraylength)
{
    
    for (int i = 0; i < Arraylength; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

int TimesRepeated(int Number, int Array[100], int Arraylength)
{

    int counter = 0;
    for (int i = 0; i < Arraylength; i++)
    {
        (Array[i] == Number) ? counter++ : counter = counter;
    }
    
    return counter;
}

int main()
{
    int Array[100], ArrayLength, Number;
    ReadArray(Array, ArrayLength);

    Number = ReadPositiveNumber("Please enter the number you want to check: ");

    cout << "Original array is : ";
    PrintArrayElements(Array, ArrayLength);

    cout << "Number " << Number << " is repeated "
    << TimesRepeated(Number, Array, ArrayLength) << " time(s)"; 

}