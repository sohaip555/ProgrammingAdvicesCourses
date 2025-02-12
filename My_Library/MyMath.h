#pragma once
#include <iostream>
using namespace std;

namespace MyMath
{

    bool IsPrime(int Number)
    {
        short half = 0;
        half = Number / 2;

        if (Number > 0 && Number <=2)
        {
            return 1; 
        }
        else
        {
            for (int i = 2; i <= half; i++)
            {
                if (Number % i == 0)
                {
                return 0;
                }
            }
            return 1;
        }
        return 0;
    }

    void PrintPrimeNumberFrom1ToN(int Number)
    {
        cout << "\n";
        cout << "Prime number from 1 to " << Number << " are" << endl;
        for (int i = 1; i <= Number; i++)
        {
            if (IsPrime(i) > 0)
            {
                cout << i << endl;
            }
        }
    }

    bool IsPerfect(int Number)
    {
        int sum = 0;
        int half = Number / 2;
        for (int i = 1; i <= half; i++)
        {
            if (Number % i == 0)
            {
                sum = sum + i;
            }
        }

        return sum == Number && sum != 0;
    }

    void PrintPerfectNumberFrom1ToN(int Number)
    {
        for (int i = 1; i <= Number; i++)
        {
        if (IsPerfect(i) == 1)
            cout << i << endl;
        }
    }

    int SumOfDigits(int Number)
    {
        int Remainder = 0, sum = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            sum += Remainder;
            Number = Number / 10;
        }
        return sum;
    }

    int CheckFrequency(int Number, int DigitsToCheck)
    {
        int Remainder = 0, Frequency = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            if (Remainder == DigitsToCheck)
            {
                Frequency++;
            }
        }
        return Frequency;
    }

    int CheckFrequency(short Number, short DigitsToCheck)
    {
        short Remainder = 0, Frequency = 0;
        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            if (Remainder == DigitsToCheck)
            {
                Frequency++;
            }
        }
        return Frequency;
    }

int ReverseNumber(int Number)
{
    int Remainder = 0, x = 0;

    while (Number > 0)
    {

        Remainder = Number % 10;
        Number = Number / 10;
        x = x * 10 + Remainder;
    }
    return x;
}

bool IsPalindromeNumber(int NumberBefore)
{
    return (NumberBefore == ReverseNumber(NumberBefore));
}

int FindhNumberPositionInArray(int Array[100], int ArrayLength, int Number)
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

bool IsNumberInArray(int Array[100], int ArrayLength, int Number)
{
    return FindhNumberPositionInArray(Array, ArrayLength, Number) != -1;
}


















}