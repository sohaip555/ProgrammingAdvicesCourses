#include <iostream>
using namespace std;

void PrintMatrix(int Matrix[3][3], int Rows,  int Columns)
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

int MaxNumberInMatrix(int Matrix[3][3], int Rows, int Columns)
{
    int Max = Matrix[0][0];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            if (Matrix[i][j] > Max)
            {
                Max = Matrix[i][j];
            }
        }
    }
    return Max;
}

int MinNumberInMatrix(int Matrix[3][3], int Rows, int Columns)
{
    int Min = Matrix[0][0];

    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            if (Matrix[i][j] < Min)
            {
                Min = Matrix[i][j];
            }
        }
    }
    return Min;
}

int main()
{
    int Matrix[3][3] = {{45,12,77},{56,50,12},{33,26,5}};
    int Rows = 3, Columns = 3, Number;
    PrintMatrix(Matrix,3,3);

    cout << "\nMax number in matrix is " << MaxNumberInMatrix(Matrix, Rows, Columns) << endl;
    cout << "\nMin number in matrix is " << MinNumberInMatrix(Matrix, Rows, Columns) << endl;
    system("pause>0");    

}