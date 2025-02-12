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

bool IsNumberInMatrix(int Matrix[3][3], int Number, int Rows,  int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            if (Matrix[i][j] == Number)
            {
                return 1;
            }
        }
    }
    return 0;
}

void PrintIntersectedNumber(int Matrix1[3][3], int Matrix2[3][3],int Rows,  int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            if (IsNumberInMatrix(Matrix1, Matrix2[i][j], Rows, Columns))
            {
                cout << Matrix2 [i][j] << "   ";
            }
        }
    }
}

int main()
{
    int Matrix1[3][3] = {{45,12,77},{56,28,12},{33,26,0}};
    int Matrix2[3][3] = {{1,2,3},{56,5,6},{33,28,9}};
    int Rows = 3, Columns = 3, Number;
    PrintMatrix(Matrix1,3,3);
    PrintMatrix(Matrix2,3,3);

    PrintIntersectedNumber(Matrix1, Matrix2, Rows, Columns);
    system("pause>0");    

}