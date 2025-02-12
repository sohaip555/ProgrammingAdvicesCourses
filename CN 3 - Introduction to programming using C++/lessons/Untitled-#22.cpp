#include <iostream>
using namespace std;


int main(){

short A = 10, B;
 B = A++; // B = A then A = A + 1

cout <<"A = " << A << endl;
cout <<"B = " << B << endl;


B = ++A;// A = A + 1 then B = A

cout <<"A = " << A << endl;
cout <<"B = " << B << endl;







    return 0;
}

