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

bool AreTypicalMatrices(int Matrix1[100][100], int Matrix2[100][100], int Rows,  int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            if (Matrix1[i][j] != Matrix2[i][j])
            {
                return false;
            }
        }
    }
    return true;
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

    if (AreTypicalMatrices(Matrix1, Matrix2, Rows, Columns))

        cout << "\nYES: both matrices are Typical" << endl;
    else
        cout << "\nNo: matrices are Not Typical" << endl;    
    system("pause>0");    
    
}