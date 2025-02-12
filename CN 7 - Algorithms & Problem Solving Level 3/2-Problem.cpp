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
    
    printf("Please enter number of Rows : ");
    scanf("%d", &Rows);

    printf("Please enter number of Columns : ");
    scanf("%d", &Columns);

    FillMatrixWethRandomNumber(Array, Rows, Columns);


    for (int i = 0; i < Columns; i++)
    {
        Sums[i] = SumOfRowNumber(Array, i, Columns);
    }

    PrintMatrix(Array, Rows, Columns);

    for (int i = 0; i < Columns; i++)
    {
        cout << "Row " << i + 1 << " Sum = " << Sums[i] << endl;
    }

    system("pause>0");    
    
}