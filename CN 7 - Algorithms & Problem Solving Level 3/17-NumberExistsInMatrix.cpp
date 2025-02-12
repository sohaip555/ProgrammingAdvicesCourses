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

int main()
{
    int Matrix[3][3] = {{0,12,77},{56,0,12},{33,26,0}};
    int Rows = 3, Columns = 3, Number;
    PrintMatrix(Matrix,3,3);

    cout << "\nPlease enter the Number to look for in matrix? ";
    cin >> Number;
    if (IsNumberInMatrix(Matrix, Number, Rows, Columns))
    {
        cout << "\nYES: It's Ther " << endl;
    }else
    {
        cout << "\nNo: It's Not Ther " << endl;
    }
    system("pause>0");    

}