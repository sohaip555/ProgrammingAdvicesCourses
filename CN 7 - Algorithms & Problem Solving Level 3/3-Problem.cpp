#include <iostream>
#include <random>
#include <time.h>
#include "..\My_Library\Mystd.h"
#include "..\My_Library\MyRandom.h"
using namespace std;


void FillMatrixWethRandomNumber(int Array[100][100], int Rows, int Columns)
{

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            Array[i][j] = MyRandom::RandomNumber(1, 99);
        }   
    }
}

int SumOfRowNumber(int Array[100][100], int Rows, int Columns)
{
    int Sum = 0;
    for (int i = 0; i < Columns; i++)
    {
        Sum = Sum + Array[Rows][i];
    }
    return Sum;
}

void SumMatrixRowsInArray(int Matrix[100][100], int Array[100], int Rows, int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        Array[i] = SumOfRowNumber(Matrix, i, Columns);
    }
    
}

void PrintMatrix(int Array[100][100], int Rows, int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("%d ",Array[i][j]);
        }
    printf("\n");
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100][100], Rows, Columns;
    int Sums[100];
    
    cout << "Please enter number of Rows : " << endl;
    cin >> Rows;

    cout << "Please enter number of Columns : " << endl;
    cin >> Columns;
 
    FillMatrixWethRandomNumber(Array, Rows, Columns);
    SumMatrixRowsInArray(Array, Sums, Rows, Columns);
    PrintMatrix(Array, Rows, Columns);

    for (int i = 0; i < Rows; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << Sums[i] << endl;
    }

    system("pause>0");    
    
}