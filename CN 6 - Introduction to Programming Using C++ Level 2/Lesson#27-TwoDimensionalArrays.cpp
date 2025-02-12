#include <iostream>
using namespace std;



int main()
{

    int x[3][4] = {{1,2,3,4},{5,6,8,9},{7,10,12,13}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}