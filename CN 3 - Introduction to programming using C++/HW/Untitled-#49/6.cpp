#include <iostream>
using namespace std;


void PrintNumber(){

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 1 + i; j <= 10 ; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}

int main(){

PrintNumber();
    
}