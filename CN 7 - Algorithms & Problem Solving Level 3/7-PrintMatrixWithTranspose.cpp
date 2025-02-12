#include <iostream>
#include <iomanip>
using namespace std;

void ReadMatrix(int Array[100][100], int Rows, int Columns)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Please enter number Array[" << i << "][" << j << "]: ";
            cin >> Array[i][j];
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
            cout << setw(2) << Array[i][j] << "  ";
        }
    cout << endl;
    }
}

void PrintMatrixWithTranspose(int Array[100][100], int Rows,  int Columns)
{
    cout << "Matrix " << Rows << " * " << Columns << endl; 
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            cout << setw(2) << Array[j][i] << "  ";
        }
    cout << endl;
    }
}

int main()
{
    int Array[100][100];

    ReadMatrix(Array, 3, 3);
    PrintMatrix(Array, 3, 3);
    PrintMatrixWithTranspose(Array, 3, 3);

}