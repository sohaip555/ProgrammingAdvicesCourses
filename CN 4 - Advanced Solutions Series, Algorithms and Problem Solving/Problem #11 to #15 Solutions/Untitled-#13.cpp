#include <iostream>
using namespace std;


void ReadNumber(int &A, int &B, int &C)
{
    cout << "Please enter A ?" << endl;
    cin >> A;

    cout << "Please enter B ?" << endl;
    cin >> B;

    cout << "Please enter C ?" << endl;
    cin >> C;
}

int MaxOf3Number(int A, int B, int C)
{
    if(A > B)
        if (A > C)
            return A;
        else
            return C;
    else
        if (B > C)
            return B;
        else
            return C;

}

void printResult(int Result)
{
    cout << "The Bigger number is " << Result;
}

int main(){

    int A, B, C;
    ReadNumber(A, B, C);
    printResult(MaxOf3Number(A, B, C));

    return 0;
}