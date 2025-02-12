#include <iostream>
#include <random>
#include <iomanip>
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
            Array[i][j] = MyRandom::RandomNumber(1, 9);
        }   
    }
}

void PrintMatrix(int Matrix[100][100], int Rows,  int Columns)
{
    cout << "Matrix " << Rows << " * " << Columns << endl; 
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("%0*d     ", 2, Matrix[i][j]);
        }
    cout << endl;
    }
}

int SumOfMatrix(int Matrix[100][100], int Rows,  int Columns)
{
    int sum = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            sum = sum + Matrix[i][j];
        }
    }
    return sum;
}

bool AreEqualtyMatrices(int Matrix1[100][100], int Matrix2[100][100], int Rows,  int Columns)
{
    return (SumOfMatrix(Matrix1, Rows, Columns) == SumOfMatrix(Matrix2, Rows, Columns));
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix1[100][100], Matrix2[100][100], Rows, Columns;
    cout << "Please enter number of Rows : " << endl;
    cin >> Rows;

    cout << "Please enter number of Columns : " << endl;
    cin >> Columns;
 
    FillMatrixWethRandomNumber(Matrix1, Rows, Columns);
    PrintMatrix(Matrix1, Rows, Columns);

    cout << endl;
    FillMatrixWethRandomNumber(Matrix2, Rows, Columns);
    PrintMatrix(Matrix2, Rows, Columns);

    if (AreEqualtyMatrices(Matrix1, Matrix2, Rows, Columns))

        cout << "YES: noth matrices are equl" << endl;
    else
        cout << "\nNo: matrices are Not equal" << endl;    
    system("pause>0");    
    
}