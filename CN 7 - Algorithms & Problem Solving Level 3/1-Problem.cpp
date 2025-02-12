#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
#include "..\My_Library\Mystd.h"
#include "..\My_Library\MyRandom.h"
using namespace std;

void FillMatrixWethRandomNumber(int Array[10][10], int Rows, int Columns)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            Array[i][j] = MyRandom::RandomNumber(1, 99);
        }   
    }
}

void PrintMatrix(int Array[10][10], int Rows,  int Columns)
{
    cout << "Matrix " << Rows << " * " << Columns << endl; 
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            cout << setw(2) << Array[i][j] << "  ";
        }
    cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[10][10], Rows, Columns;

    Rows = Mystd::ReadNumber("Please enter number of Rows : ");
    Columns = Mystd::ReadNumber("Please enter number of Columns : ");

    FillMatrixWethRandomNumber(Array, Rows, Columns);
    PrintMatrix(Array, Rows, Columns);

}