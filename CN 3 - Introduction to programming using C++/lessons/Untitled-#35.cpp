#include <iostream>
using namespace std;



float MySumfunction(int Num1, int Num2)
{   
    return Num1 * Num2;
}

int main(){

    int Num1, Num2;
    cin >> Num1;
    cin >> Num2;
    cout << MySumfunction(Num1, Num2) << endl;
    cout << MySumfunction(22, 2) << endl;
    cout << MySumfunction(12, 6) << endl;
    cout << MySumfunction(6, 13) << endl;

    return 0;
}