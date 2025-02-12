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

int CountNumberInMatrix(int Matrix[3][3], int Number, int Rows,  int Columns)
{
    int Countre = 0;
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            if (Matrix[i][j] == Number)
            {
                Countre ++;
            }
        }
    }
    return Countre;
}

bool IsSparseMatrix(int Matrix[3][3], int Rows,  int Columns)
{
    return (CountNumberInMatrix(Matrix, 0, Rows, Columns) > ((Rows * Columns) / 2));
}

int main()
{
    int Matrix[3][3] = {{0,1,0},{1,0,12},{1,1,0}};
    int Rows = 3, Columns = 3;
    PrintMatrix(Matrix,3,3);

    if (IsSparseMatrix(Matrix, Rows, Columns))
    {
        cout << "\nYES: It's Sparse ";
    }else
    {
        cout << "\nNo: It's Not Sparse ";
    }
    system("pause>0");    

}