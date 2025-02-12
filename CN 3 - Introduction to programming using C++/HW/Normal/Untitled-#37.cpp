#include <iostream>
using namespace std;

void Swap(int &A, int &B){
    int Temp;

    Temp = A;
    A = B;
    B = Temp;
}

int main(){

int A, B;

cout << "Please enter number A: ";
cin >> A;

cout << "Please enter number B: ";
cin >> B;

Swap(A, B);
cout << "The value after swap is A = " << A << ", B = " << B << endl;  



    return 0;
}