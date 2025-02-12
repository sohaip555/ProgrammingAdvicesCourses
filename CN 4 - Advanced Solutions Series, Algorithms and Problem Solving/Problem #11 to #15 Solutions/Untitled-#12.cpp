#include <iostream>
using namespace std;


void ReadNumber(int &Number1, int &Number2)
{
    cout << "Please enter Number 1 ?" << endl;
    cin >> Number1;

    cout << "Please enter Number 2 ?" << endl;
    cin >> Number2;
}

int MaxOf2Number(int Number1, int Number2)
{
    if(Number1 > Number2)
        return Number1;
    else
        return Number2;
}

void printResult(int Result)
{
    cout << "The Bigger number is " << Result;
}

int main(){

    int Number1, Number2;
    ReadNumber(Number1, Number2);
    printResult(MaxOf2Number(Number1, Number2));

    return 0;
}