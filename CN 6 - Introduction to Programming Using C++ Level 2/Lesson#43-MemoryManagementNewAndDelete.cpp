#include <iostream>
using namespace std;



int main()
{
    int * ptr1;
    float * ptr2;

    ptr1 = new int;
    ptr2 = new float;

    *ptr1 = 20;
    *ptr2 = 10.6;

    cout << "ptr1 = " << ptr1 << endl;
    cout << "*ptr1 = " << *ptr1 << endl;

    cout << "ptr2 = " << ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;

    cout << "ptr2 = " << ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;

}