#include <iostream>
using namespace std; 

int main() 
{ 
    int a = 10; 
    int * p = &a; 

    cout << "a Value = " << a << endl;
    cout << "a address = " << &a << endl;

    cout << "Pointer Value = " << p << endl;



    return 0;
}