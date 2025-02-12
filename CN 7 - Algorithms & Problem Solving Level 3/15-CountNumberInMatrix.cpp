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

int main()
{
    int Matrix[3][3] = {{9,1,9},{1,9,12},{1,1,9}};
    int Number, Counter;
    PrintMatrix(Matrix,3,3);

    cout << "Enter The number to count in matrix? ";
    cin >> Number;

    Counter = CountNumberInMatrix(Matrix, Number, 3,3);
    cout << "Number " << Number << " count in matrix is " << Counter;
    system("pause>0");    

}