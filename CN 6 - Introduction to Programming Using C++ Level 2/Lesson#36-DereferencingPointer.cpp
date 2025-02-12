#include <iostream>
using namespace std;



int main()
{

    int a = 10;
    cout << "a :" << a << endl;
    cout << "&a :" << &a << endl;

    int * p;
    p = &a;

    cout << "*p :" << *p << endl;
    cout << "p :" << p << endl;

    *p = 20;

    cout << "a :" << a << endl;
    cout << "*p :" << *p << endl;

    a = 30;

    
    cout << "a :" << a << endl;
    cout << "*p :" << *p << endl;
}