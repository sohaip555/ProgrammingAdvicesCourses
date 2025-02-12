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

void PrintMatrix(int Array[100][100], int Rows,  int Columns)
{
    cout << "Matrix " << Rows << " * " << Columns << endl; 
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("%0*d     ", 9, Array[i][j]);
            // cout << setw(2) << Array[i][j] << "  ";
        }
    cout << endl;
    }
}

void MatrixMultiplication(int Array1[100][100], int Array2[100][100], int Array3[100][100], int Rows, int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            Array3[i][j] = Array1[i][j] * Array2[i][j];
        }
        
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    int Array1[100][100], Array2[100][100], Array3[100][100], Rows, Columns;
    
    cout << "Please enter number of Rows : " << endl;
    cin >> Rows;

    cout << "Please enter number of Columns : " << endl;
    cin >> Columns;
 
    FillMatrixWethRandomNumber(Array1, Rows, Columns);
    PrintMatrix(Array1, Rows, Columns);

    FillMatrixWethRandomNumber(Array2, Rows, Columns);
    PrintMatrix(Array2, Rows, Columns);

    MatrixMultiplication(Array1, Array2, Array3, Rows, Columns);
    PrintMatrix(Array3, Rows, Columns);

    system("pause>0");    
    
}