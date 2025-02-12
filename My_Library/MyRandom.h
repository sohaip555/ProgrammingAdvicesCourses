#pragma once
#include <iostream>
#include <time.h>
#include <random>
#include "Mystd.h"
using namespace std;



namespace MyRandom
{
    void main()
    {
        srand((unsigned)time(NULL));
    }

    int RandomNumber(int From, int To)
    {
        int Result;
        Result = rand() % (To - From + 1) + From;
        return Result;
    }

    void FillAraryWithRandomNumbers(int Array[100], int &Arraylength)
    {
        Arraylength = Mystd::ReadPositiveNumber("Please enter the number of elements");

        for (int i = 0; i < Arraylength; i++)
        {
            Array[i] = RandomNumber(1, 100);
        }
    }

    void FillMatrixWethRandomNumber(int Array[10][10], int Rows, int Columns)
    {

        for (int i = 0; i < Rows; i++)
        {
            for (int j = 0; j < Columns; j++)
            {
                Array[i][j] = MyRandom::RandomNumber(0, 50);
            }
                
        }
    }










}

