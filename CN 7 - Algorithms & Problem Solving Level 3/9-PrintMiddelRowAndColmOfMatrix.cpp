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

void PrintMiddelRowOfMatrix(int Matrix[100][100], int Rows,  int Columns)
{
    int num = Rows / 2;
    cout << "\nMiddle Row of matrix1: " << endl;
    for (int i = 0; i < Columns; i++)
    {
        printf("%0*d     ", 2, Matrix[num][i]);
        // cout << Matrix[2][i] << "  ";
    } 
    cout << endl;
}

void PrintMiddelColumnOfMatrix(int Matrix[100][100], int Rows,  int Columns)
{
    int num = Rows / 2;
    cout << "\nMiddle column of matrix1: " << endl;
    for (int i = 0; i < Columns; i++)
    {
        printf("%0*d     ", 2, Matrix[i][num]);
        // cout << Matrix[2][i] << "  ";
    } 
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int Matrix[100][100], Rows, Columns;
    
    cout << "Please enter number of Rows : " << endl;
    cin >> Rows;

    cout << "Please enter number of Columns : " << endl;
    cin >> Columns;
 
    FillMatrixWethRandomNumber(Matrix, Rows, Columns);
    PrintMatrix(Matrix, Rows, Columns);

    PrintMiddelRowOfMatrix(Matrix, Rows, Columns);
    PrintMiddelColumnOfMatrix(Matrix, Rows, Columns);

    system("pause>0");    
    
}