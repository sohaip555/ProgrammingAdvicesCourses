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

bool IsPalindromMatrix(int Matrix[3][3],int Rows, int Columns)
{
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns / 2; j++)
        {
            if (Matrix[i][j] != Matrix[i][Columns - 1 - j])
            {
                return 0;
            }
        }
    }
    return 1;    
}

int main()
{
    int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
    int Rows = 3, Columns = 3, Number;
    PrintMatrix(Matrix1,3,3);

    if (IsPalindromMatrix(Matrix1,Rows, Columns))
    {
        cout << "\nYes: Matrix is palindrom\n";
    }
    else
    {
        cout << "\nNo: Matrix is not palindrom\n";
    }
    system("pause>0");    

}