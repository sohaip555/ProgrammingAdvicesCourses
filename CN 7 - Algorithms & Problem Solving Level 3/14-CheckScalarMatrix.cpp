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

bool IsMatrixScalar(int Matrix[3][3], int Rows,  int Columns)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && Matrix[i][j] != Matrix[0][0])
            {
                return false;
            }
            else if (i != j && Matrix[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int Matrix[3][3] = {{9,0,9},{0,9,0},{0,0,9}};

    PrintMatrix(Matrix,3,3);

    if (IsMatrixScalar(Matrix, 3, 3))
    {
        cout << "\nYES: both matrices are Scalar" << endl;
    }else{
        cout << "\nNo: matrices are Not Scalar" << endl; 
    }
    system("pause>0");    

}