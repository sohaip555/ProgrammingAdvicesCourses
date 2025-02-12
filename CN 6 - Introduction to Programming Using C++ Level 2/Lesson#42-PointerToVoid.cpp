#include <iostream>
using namespace std;



int main()
{
    void * p;
    float f =10.5;

    p = &f;

    cout << p << endl;
    
    cout << *(static_cast<float*>(p)) << endl;

    int x = 5;

    p = &x;

    cout << p << endl;
    cout << *(static_cast<int*>(p));

}